%code requires {
#include "symbol_table.h"
}

%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;

%}

%union {
    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   
}

%token INT FLOAT_TYPE STRING_TYPE CHAR_TYPE CONST BOOL_TYPE
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK
%token RETURN VOID_TYPE TRUE_COND FALSE_COND

%token PLUS MINUS MULTIPLY DIVIDE MODULO
%token ASSIGN EQUAL NOT_EQUAL
%token LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token AND OR NOT

%token LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA COLON



/* Value-returning tokens */
%token <string> IDENTIFIER 
%token <integer> NUMBER 
%token <floatval> FLOAT 




%type <integer> expression T F condition assign bool_expression
%type <datatype> type
%start program
%%

program: 
    { CreateSymbolTable(); }
    statement_list
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
    declaration_stmt
    | assignment_stmt
    | expression SEMICOLON         
    | if_stmt
    | while_stmt
    | for_stmt
    | switch_stmt
    | function_decl
    | do_while_stmt
    | return_stmt
    ;



declaration_stmt:
    type IDENTIFIER SEMICOLON
    {
        insert_symbol($2, $1, VARIABLE, 0);
    }
    | CONST type IDENTIFIER ASSIGN expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($3, $2, VARIABLE, 1);
        if (entry) entry->is_initialized = 1;
    }
    | type IDENTIFIER ASSIGN expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($2, $1, VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
    }
    | BOOL_TYPE IDENTIFIER SEMICOLON
    {
        insert_symbol($2, TYPE_BOOL, VARIABLE, 0);
    }
    | BOOL_TYPE IDENTIFIER ASSIGN bool_expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($2, TYPE_BOOL, VARIABLE, 0);
        if (entry) entry->is_initialized = 1;
        printf("Boolean variable declared: %s\n", $2);
    }
    ;


bool_expression:
    TRUE_COND            { $$ = 1; }
    | FALSE_COND         { $$ = 0; }
    | LPAREN condition RPAREN      { $$ = $2; }
    ;



type:
    INT               { $$ = TYPE_INT; }
    | FLOAT_TYPE      { $$ = TYPE_FLOAT; }
    | STRING_TYPE     { $$ = TYPE_STRING; }
    | CHAR_TYPE       { $$ = TYPE_CHAR; }
    ;

assignment_stmt:
    IDENTIFIER ASSIGN expression SEMICOLON
    {
        if (!update_symbol_initialized($1)) {
            yyerror("Undeclared variable in assignment");
        }
    }
  
    ;

assign:
    IDENTIFIER ASSIGN expression  { 
        printf("Assignment executed: %s \n", $1);
        $$ = $3;  
    }
    ;
    
expression:
    expression PLUS T                { $$ = $1 + $3; }
    | expression MINUS T             { $$ = $1 - $3; }
    | T                             { $$ = $1; }
    ;
 

T:
    T MULTIPLY F                    { $$ = $1 * $3; }
    | T DIVIDE F                    { if ($3 == 0) 
                                        yyerror("Division by zero");
                                     else 
                                        $$ = $1 / $3;
                                    }
    | T MODULO F                    { $$ = $1 % $3; }
    | F                             { $$ = $1; }
    ;

F:
    LPAREN condition RPAREN        { $$ = $2; }
    | MINUS F                       { $$ = -$2; }
    | IDENTIFIER                   
    {
        SymbolEntry *entry = lookup_symbol($1);
        if (!entry) {
            yyerror("Undeclared variable used in expression");
            $$ = 0; 
        } else {
            update_symbol_used($1);
            $$ = 0; // or entry->type if you want type checking later
        }
    }
    | IDENTIFIER LPAREN argument_list RPAREN 
    {
        SymbolEntry *entry = lookup_symbol($1);
        if (!entry || entry->kind != FUNCTION) {
            yyerror("Call to undeclared function");
        } else {
            update_symbol_used($1);
        }
        printf("Function call: %s() executed\n", $1);
        $$ = 0;
    }
    | IDENTIFIER LPAREN RPAREN
    {    
         SymbolEntry *entry = lookup_symbol($1);
        if (!entry || entry->kind != FUNCTION) {
            yyerror("Call to undeclared function");
        } else {
            update_symbol_used($1);
        }
        $$ = 0;  
        printf("Function call: %s() with no arguments executed\n", $1);  $$ = 0;    
    }
    | FLOAT                         { $$ = $1; }
    | NUMBER                        { $$ = $1; }
    | TRUE_COND                     { $$ = 1; }
    | FALSE_COND                    { $$ = 0; }
    ;

condition:
    expression EQUAL expression     { $$ = ($1 == $3); }
    | expression NOT_EQUAL expression { $$ = ($1 != $3); }
    | expression LESS_THAN expression { $$ = ($1 < $3); }
    | expression GREATER_THAN expression { $$ = ($1 > $3); }
    | expression LESS_EQUAL expression { $$ = ($1 <= $3); }
    | expression GREATER_EQUAL expression { $$ = ($1 >= $3); }
    | expression AND expression { $$ = ($1 && $3); }
    | expression OR expression { $$ = ($1 || $3); }
    | NOT expression { $$ = !$2; }
    | expression { $$ = $1; }
    ;

if_stmt:
    IF LPAREN condition RPAREN scope_start statement_list scope_end                               { printf("IF statement executed\n"); }
    | IF LPAREN condition RPAREN scope_start statement_list scope_end ELSE scope_start statement_list scope_end   {printf("IF-ELSE statement executed\n");  }
    ;

while_stmt:
    WHILE LPAREN condition RPAREN 
    LBRACE  { enter_scope(); }
    statement_list 
    RBRACE  { exit_scope(); }                           
    {printf("WHILE loop executed\n");}
    ;

for_stmt:
    FOR LPAREN declaration_stmt condition SEMICOLON assign RPAREN 
    LBRACE  { enter_scope(); }
    statement_list 
    RBRACE  { exit_scope(); }                           
    { printf("FOR loop with declaration executed\n");    }
    ;


switch_stmt:
    SWITCH LPAREN IDENTIFIER RPAREN scope_start case_list scope_end
    {
        SymbolEntry *entry = lookup_symbol($3);
        if (!entry) {
            yyerror("Undeclared variable in SWITCH statement");
        } else {
            update_symbol_used($3);
            printf("SWITCH statement executed on variable '%s'\n", $3);
        }
    }
    | SWITCH LPAREN IDENTIFIER RPAREN scope_start case_list default_case scope_end
    {
        SymbolEntry *entry = lookup_symbol($3);
        if (!entry) {
            yyerror("Undeclared variable in SWITCH statement");
        } else {
            update_symbol_used($3);
            printf("SWITCH statement with DEFAULT executed on variable '%s'\n", $3);
        }
    }
    ;

scope_start: LBRACE { enter_scope(); };

scope_end:   RBRACE { exit_scope(); };

case_list:
    case_stmt
    | case_list case_stmt
    ;

case_stmt:
    CASE expression COLON statement_list
    {      printf("CASE executed\n");    }
    | CASE expression COLON statement_list BREAK SEMICOLON
    {      printf("CASE with BREAK executed\n");    }
    ;

default_case:
    DEFAULT COLON statement_list
    {        printf("DEFAULT case executed\n");   }
    | DEFAULT COLON statement_list BREAK SEMICOLON
    {     printf("DEFAULT case with BREAK executed\n");   }
    ;

function_decl:
    type IDENTIFIER LPAREN parameter_list RPAREN scope_start statement_list scope_end {
        insert_symbol($2, $1, FUNCTION, 0);
        printf("Function declaration executed\n");
    }
    | type IDENTIFIER LPAREN RPAREN scope_start statement_list scope_end
    {       
        insert_symbol($2, $1, FUNCTION, 0);
        printf("Function declaration (no parameters) executed\n");    
    }
    | VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN scope_start statement_list scope_end
    {      
        insert_symbol($2, TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration executed\n");  
    }
    | VOID_TYPE IDENTIFIER LPAREN RPAREN scope_start statement_list scope_end
    {      
        insert_symbol($2, TYPE_VOID, FUNCTION, 0);
        printf("Void function declaration (no parameters) executed\n");  
    }
    ;

parameter_list:
    parameter
    | parameter_list COMMA parameter
    ;

parameter:
    type IDENTIFIER
    {
        insert_symbol($2, $1, PARAMETER, 0);
    }
    ;

return_stmt:
    RETURN expression SEMICOLON
    {
        printf("RETURN statement executed\n");
    }
    | RETURN SEMICOLON
    {
        printf("RETURN (void) statement executed\n");
    }
    ;


do_while_stmt:
    DO 
    LBRACE  { enter_scope(); }  
    statement_list 
    RBRACE  { exit_scope(); }
    WHILE LPAREN condition RPAREN SEMICOLON
    { printf("DO-WHILE loop executed\n"); }
    ;




argument_list:
    expression
    | argument_list COMMA expression
    ;
%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char **argv) {
    if (argc > 1){
        yyin = fopen(argv[1], "r");

        if (!yyin) {
        perror("Error opening file");
        return 1;
        }
    }
    if(yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
}
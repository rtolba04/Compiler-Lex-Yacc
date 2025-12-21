%code requires {
#include "symbol_table.h"
#include "semantic_checks.h"
}

%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;
int loop_depth = 0;
int switch_depth = 0;

%}

%union {
    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   
}

 // === ERROR HANDLING ===
%define parse.error detailed
extern int line_num;
extern int count_lexical_errors;
int count_syntax_errors = 0;
int count_semantic_errors = 0;

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




%type <integer> expression T F condition assign bool_expression statement statement_list break_stmt block switch_stmt
%type <datatype> type
%type <string> function_name function_name_void
%start program
%%

program: 
    { CreateSymbolTable(); } 
    global_list 
    {
        checkUnusedFunctions();
    }
    ;

global_list: 
    global_element | global_list global_element ;

global_element: 
    function_decl | declaration_stmt ;

statement_list:
    statement { $$ = $1; }
    | statement_list statement { $$ = $2; }
    ;

statement:
    declaration_stmt { $$ = 0; }
    | assignment_stmt  { $$ = 0; }
    | expression SEMICOLON { $$ = 0; }
    | if_stmt { $$ = 0; }
    | while_stmt { $$ = 0; }
    | for_stmt { $$ = 0; }
    | switch_stmt { $$ = 0; }
    | function_decl { $$ = 0; }
    | do_while_stmt { $$ = 0; }
    | return_stmt { $$ = 0; }
    | break_stmt { $$ = $1; }
    | block    { $$ = $1; }
    ;

break_stmt:
    BREAK SEMICOLON
    {
        if (loop_depth == 0 && switch_depth == 0) {
            semanticError("Error: 'break' statement used outside of loop or switch");
        }
        printf("BREAK statement executed\n");
        $$ = 1; 
    }
    ;
block: 
    LBRACE { enter_scope("block"); } 
    statement_list 
    RBRACE { exit_scope(); $$ = $3; }
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
        checkConstAssignment($1);
        DataType lhsType = getType($1);
        if (!areTypesCompatible(lhsType, $3)) {
            semanticError("Type mismatch in assignment");
        }
        if (!update_symbol_initialized($1)) {
            semanticError("Undeclared variable in assignment");
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
    expression PLUS T    {
        $$ = resolveType($1, $3);
    }

    | expression MINUS T  {
        $$ = resolveType($1, $3);
    }
    | T                             { $$ = $1; }
    ;
 

T:
    T MULTIPLY F                    { $$ = $1 * $3; }
    | T DIVIDE F                    { if ($3 == 0) 
                                        semanticError("Division by zero");
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
            semanticError("Undeclared variable used in expression");
            $$ = 0; 
        } else if (entry->is_initialized == 0) {
            semanticError("Use of uninitialized variable");
            $$ = 0;
        }
         else {
            update_symbol_used($1);
            $$ = 0; // or entry->type if you want type checking later
        }
    }
    | IDENTIFIER LPAREN argument_list RPAREN 
    {
        SymbolEntry *entry = lookup_symbol($1);
        if (!entry || entry->kind != FUNCTION) {
            semanticError("Call to undeclared function");
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
    IF LPAREN condition RPAREN  if_block { printf("IF statement executed\n"); }
    | IF LPAREN condition RPAREN LBRACE  RBRACE ELSE else_block {printf("IF-ELSE statement executed\n");  }
    ;  

if_block:
    LBRACE {enter_scope("if-block");} statement_list {exit_scope();} RBRACE
    ;
else_block:
    LBRACE {enter_scope("else-block");} statement_list {exit_scope();} RBRACE
    ;
    

while_stmt:
    WHILE LPAREN condition RPAREN 
    { loop_depth++; }
    LBRACE {enter_scope("while");} statement_list {exit_scope();} RBRACE  
    { 
        loop_depth--;
        printf("WHILE loop executed\n"); 
    }
    ;

for_stmt:
    FOR 
    { enter_scope("for-loop"); }
    LPAREN declaration_stmt condition SEMICOLON assign RPAREN 
    { loop_depth++; }
    LBRACE statement_list RBRACE  
    { 
        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    }
    ;


switch_stmt:
    SWITCH LPAREN IDENTIFIER RPAREN 
    { 
        SymbolEntry *entry = lookup_symbol($3);
        if (!entry) {
            semanticError("Undeclared variable in SWITCH statement");
        } else if (entry->is_initialized == 0) {
            semanticError("Use of uninitialized variable in SWITCH statement");
        } else {
            update_symbol_used($3);
        }
        switch_depth++; 
        enter_scope("switch-scope");
    }
    LBRACE case_list switch_optional_default RBRACE
    {
        switch_depth--;
        exit_scope();
        printf("SWITCH statement executed on variable '%s'\n", $3);
        $$ = 0; 
    }
    ;


switch_optional_default:
    default_case
    | 
    ;



case_list:
    case_stmt
    | case_list case_stmt
    ;

case_stmt:
    CASE expression COLON statement_list
    {
        if ($4 == 0) {
            semanticError("Semantic Error: Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    }
    ;

default_case:
    DEFAULT COLON statement_list
    {
        if ($3 == 0) {
            semanticError("Semantic Error: Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    }
    ;

function_decl:
    function_name LPAREN parameter_list RPAREN LBRACE statement_list  RBRACE
    { 
        printf("Function declaration executed\n");
        {exit_scope();} 
        
    }
    | function_name LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        printf("Function declaration (no parameters) executed\n"); 
        {exit_scope();} 
    }
    | function_name_void LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    { 
        printf("Void function declaration executed\n"); 
        {exit_scope();}
    }
    | function_name_void LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        printf("Void function declaration (no parameters) executed\n"); 
        {exit_scope();}
    }
    ;

function_name:
    type IDENTIFIER 
    {
        insert_symbol($2, $1, FUNCTION, 0);
        enter_scope($2); 
    };

function_name_void:
    VOID_TYPE IDENTIFIER 
    {
        insert_symbol($2, TYPE_VOID, FUNCTION, 0);
        enter_scope($2); 
    };

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
        checkReturn(current_function_name, $2, 1);
        printf("RETURN statement executed\n");
    }
    | RETURN SEMICOLON
    {
        checkReturn(current_function_name, TYPE_VOID, 0);
        printf("RETURN (void) statement executed\n");
    }
    ;


do_while_stmt:
    DO 
    { loop_depth++; }
    LBRACE {enter_scope("do-while");} 
    statement_list 
    {exit_scope();} RBRACE
    { loop_depth--; }  
    WHILE LPAREN condition RPAREN SEMICOLON
    {
        printf("DO-WHILE loop executed\n");
    }
    ;

argument_list:
    expression
    | argument_list COMMA expression
    ;
%%

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error at line %d: %s\n", line_num, s);
    count_syntax_errors++;
}

int main(int argc, char **argv) {
    if (argc > 1){
        yyin = fopen(argv[1], "r");

        if (!yyin) {
        perror("Error opening file");
        return 1;
        }
    }

    line_num = 1;
    count_lexical_errors = 0;
    count_syntax_errors = 0;
    count_semantic_errors = 0;

    if(yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed due to syntax errors.\n");
    }
    printf("Lexical errors: %d\n", count_lexical_errors);
    printf("Syntax errors: %d\n", count_syntax_errors);
    printf("Semantic errors: %d\n", count_semantic_errors);

    if (count_lexical_errors > 0 || count_syntax_errors > 0 || count_semantic_errors > 0) {
        return 1;
    }

    printf("Compilation successful. No errors found.\n");
    return 0;

}
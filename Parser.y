%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;

%}

%union {
    int integer;      
    float floatval;     
    char *string;     
    char charval;     
}

%token INT FLOAT_TYPE STRING_TYPE CHAR_TYPE CONST
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK
%token RETURN VOID_TYPE

%token PLUS MINUS MULTIPLY DIVIDE MODULO
%token ASSIGN EQUAL NOT_EQUAL
%token LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token AND OR NOT

%token LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA COLON



/* Value-returning tokens */
%token <string> IDENTIFIER 
%token <integer> NUMBER 
%token <floatval> FLOAT 


%type <integer> expression T F condition assign
%start program
%%

program: 
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
    | CONST type IDENTIFIER ASSIGN expression SEMICOLON
    | type IDENTIFIER ASSIGN expression SEMICOLON
    ;

type:
    INT
    | FLOAT_TYPE
    | STRING_TYPE
    | CHAR_TYPE      
    ;

assignment_stmt:
    IDENTIFIER ASSIGN expression SEMICOLON
    { printf("Assignment: %s\n", $1); }
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
    LPAREN expression RPAREN        { $$ = $2; }
    | MINUS F                       { $$ = -$2; }
    | IDENTIFIER                    { /* Need symbol table lookup */ }
    | IDENTIFIER LPAREN argument_list RPAREN
    {      printf("Function call: %s() executed\n", $1);      $$ = 0;    }
    | IDENTIFIER LPAREN RPAREN
    {      printf("Function call: %s() with no arguments executed\n", $1);  $$ = 0;     }
    | FLOAT                         { $$ = $1; }
    | NUMBER                        { $$ = $1; }
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
    ;

if_stmt:
    IF LPAREN condition RPAREN LBRACE statement_list RBRACE                                { printf("IF statement executed\n"); }
    | IF LPAREN condition RPAREN LBRACE statement_list RBRACE ELSE LBRACE statement_list RBRACE   {printf("IF-ELSE statement executed\n");  }
    ;

while_stmt:
    WHILE LPAREN condition RPAREN LBRACE statement_list RBRACE                             {printf("WHILE loop executed\n");}
    ;

for_stmt:
    FOR LPAREN declaration_stmt condition SEMICOLON assign RPAREN LBRACE statement_list RBRACE    { printf("FOR loop with declaration executed\n");    }
    ;


switch_stmt:
    SWITCH LPAREN IDENTIFIER RPAREN LBRACE case_list RBRACE
    {    printf("SWITCH statement executed\n");  }
    | SWITCH LPAREN IDENTIFIER RPAREN LBRACE case_list default_case RBRACE
    {   printf("SWITCH statement with DEFAULT executed\n");   }
    ;

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
    type IDENTIFIER LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    {       printf("Function declaration executed\n");   }
    | type IDENTIFIER LPAREN RPAREN LBRACE statement_list RBRACE
    {       printf("Function declaration (no parameters) executed\n");    }
    | VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    {       printf("Void function declaration executed\n");   }
    ;

parameter_list:
    parameter
    | parameter_list COMMA parameter
    ;

parameter:
    type IDENTIFIER
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
    DO LBRACE statement_list RBRACE WHILE LPAREN condition RPAREN SEMICOLON
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
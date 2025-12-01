%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);

%}

%union {
    int integer;      
    float floatval;     
    char *string;     
    char charval;     
}

%token INT FLOAT_TYPE STRING_TYPE CHAR_TYPE CONST
%token IF ELSE WHILE FOR REPEAT UNTIL SWITCH CASE DEFAULT BREAK
%token FUNCTION RETURN

%token PLUS MINUS MULTIPLY DIVIDE MODULO
%token ASSIGN EQUAL NOT_EQUAL
%token LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token AND OR NOT

%token LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA COLON



/* Value-returning tokens */
%token <string> IDENTIFIER 
%token <integer> NUMBER 
%token <floatval> FLOAT 


%type <integer> expression T F condition
%start program
%%

program: 
    statement 
    ;

statement:
    declaration_stmt
    | assignment_stmt
    | expression SEMICOLON          { printf("Result: %d\n", $1); }
    | if_stmt
    | while_stmt
    | for_stmt
    | switch_stmt
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
    ;
assign:
    IDENTIFIER ASSIGN expression
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
    IF LPAREN condition RPAREN LBRACE statement RBRACE                                { printf("IF statement executed\n"); }
    IF LPAREN condition RPAREN LBRACE statement RBRACE ELSE LBRACE statement RBRACE   {printf("IF-ELSE statement executed\n");  }
    ;

while_stmt:
    WHILE LPAREN condition RPAREN LBRACE statement RBRACE                             {printf("WHILE loop executed\n");}
    ;

for_stmt:
    FOR LPAREN declaration_stmt condition SEMICOLON assign RPAREN LBRACE statement RBRACE    { printf("FOR loop with declaration executed\n");    }
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
    CASE expression COLON statement
    {      printf("CASE executed\n");    }
    | CASE expression COLON statement BREAK SEMICOLON
    {      printf("CASE with BREAK executed\n");    }
    ;

default_case:
    DEFAULT COLON statement
    {        printf("DEFAULT case executed\n");   }
    | DEFAULT COLON statement BREAK SEMICOLON
    {     printf("DEFAULT case with BREAK executed\n");   }
    ;


%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
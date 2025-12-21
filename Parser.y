%code requires {
#include "symbol_table.h"
#include "semantic_checks.h"
}

%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol_table.h"
#include "semantic_checks.h"

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;
int loop_depth = 0;
int switch_depth = 0;

extern int line_num;
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




%type <integer> expression T F condition assign bool_expression statement statement_list break_stmt block switch_stmt
%type <datatype> type
%type <string> function_name function_name_void 
%type <datatype> argument_list
%start program
%%

program: 
    { CreateSymbolTable(); } 
    global_list 
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
        checkBreakContext(loop_depth, switch_depth);
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
        if (!insert_symbol($2, $1, VARIABLE, 0)) {
            semanticError("Variable declaration failed");
        }
    }
    | CONST type IDENTIFIER ASSIGN expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($3, $2, VARIABLE, 1);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Const variable declaration failed");
        }
    }
    | type IDENTIFIER ASSIGN expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($2, $1, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
        } else {
            semanticError("Variable declaration failed");
        }
    }
    | BOOL_TYPE IDENTIFIER SEMICOLON
    {
        if (!insert_symbol($2, TYPE_BOOL, VARIABLE, 0)) {
            semanticError("Boolean variable declaration failed");
        }
    }
    | BOOL_TYPE IDENTIFIER ASSIGN bool_expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($2, TYPE_BOOL, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            printf("Boolean variable declared: %s\n", $2);
        } else {
            semanticError("Boolean variable declaration failed");
        }
    }
    | type error SEMICOLON {
        syntaxError("Invalid variable declaration");
        yyerrok;
    }
    | CONST type error SEMICOLON {
        syntaxError("Invalid const declaration - expected: const type identifier = value;");
        yyerrok;
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
        if (!checkVariableDeclared($1)) {
        } else {
            // Check const reassignment
            if (!checkConstReassignment($1)) {
                // Error already reported
            } else {
                // Check type compatibility
                DataType lhsType = getType($1);
                DataType rhsType = $3; // Simplified - in real implementation track expression types
                

                    if (!areTypesCompatible(lhsType, rhsType)) {
                    char error_msg[256];
                    snprintf(error_msg, sizeof(error_msg),
                            "Type mismatch in assignment to '%s': cannot assign %s to %s",
                            $1,
                            dataTypeToString(rhsType), 
                            dataTypeToString(lhsType));
                    semanticError(error_msg);
                }
                if (!update_symbol_initialized($1)) {
                    semanticError("Failed to update symbol initialization");
                }
            }
        }
    }
    | error ASSIGN expression SEMICOLON {
        syntaxError("Invalid left-hand side in assignment");
        yyerrok;
    }
    | IDENTIFIER ASSIGN error SEMICOLON {
        syntaxError("Invalid expression in assignment");
        yyerrok;
    }
    ;

assign:
    IDENTIFIER ASSIGN expression  { 
        if (checkVariableDeclared($1)) {
            if (checkConstReassignment($1)) {
                printf("Assignment executed: %s\n", $1);
            }
        }
        $$ = $3;  
    }
    ;
    
expression:
    expression PLUS T    {
        DataType type = resolveType($1, $3);
        $$ = type;
    }
    | expression MINUS T  {
        DataType type = resolveType($1, $3);
        $$ = type;
    }
    | T  { $$ = $1; }
    ;
 

T:
    T MULTIPLY F  { 
        DataType type = resolveType($1, $3);
        $$ = type; 
    }
    | T DIVIDE F  { 
        if ($3 == 0) {
            checkDivisionByZero(0);
            $$ = TYPE_UNKNOWN;
        } else {
            DataType type = resolveType($1, $3);
            $$ = type;
        }
    }
    | T MODULO F  { 
        if ($3 == 0) {
            checkDivisionByZero(0);
            $$ = TYPE_UNKNOWN;
        } else {
            // Modulo only works with integers
            if ($1 != TYPE_INT || $3 != TYPE_INT) {
                semanticError("Modulo operator requires integer operands");
            }
            $$ = TYPE_INT;
        }
    }
    | F  { $$ = $1; }
    ;

F:
    LPAREN condition RPAREN  { $$ = $2; }
    | MINUS F  { $$ = -$2; }
    | IDENTIFIER                   
    {
        if (checkVariableDeclared($1)) {
            if (checkVariableInitialized($1)) {
                update_symbol_used($1);
                $$ = getType($1);
            } else {
                $$ = TYPE_UNKNOWN;
            }
        } else {
            $$ = TYPE_UNKNOWN;
        }
    }
    | IDENTIFIER LPAREN argument_list RPAREN 
    {
        if (checkFunctionCall($1, argument_types, argument_count)) {
            update_symbol_used($1);
            $$ = getType($1);
        } else {
            $$ = TYPE_UNKNOWN;
        }
        argument_count = 0;
        printf("Function call: %s() executed\n", $1);
    }
    | IDENTIFIER LPAREN RPAREN
    {    
        if (checkFunctionCall($1, NULL, 0)) {
            update_symbol_used($1);
            $$ = getType($1);
        } else {
            $$ = TYPE_UNKNOWN;
        }
        printf("Function call: %s() with no arguments executed\n", $1);
    }
    | FLOAT  { $$ = TYPE_FLOAT; }
    | NUMBER  { $$ = TYPE_INT; }
    | TRUE_COND  { $$ = TYPE_BOOL; }
    | FALSE_COND  { $$ = TYPE_BOOL; }
    ;

condition:
    expression EQUAL expression  { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression NOT_EQUAL expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression LESS_THAN expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression GREATER_THAN expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression LESS_EQUAL expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression GREATER_EQUAL expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression AND expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression OR expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | NOT expression { 
        checkBooleanCondition(TYPE_BOOL);
        $$ = TYPE_BOOL; 
    }
    | expression { $$ = $1; }
    ;

    
if_stmt:
    IF LPAREN condition RPAREN if_block { 
        printf("IF statement executed\n"); 
    }
    | IF LPAREN condition RPAREN if_block ELSE else_block {
        printf("IF-ELSE statement executed\n");  
    }
    // | IF error RPAREN if_block {
    //     syntaxError("Malformed condition in IF statement");
    //     yyerrok;
    // }
    // | IF LPAREN condition error {
    //     syntaxError("Missing closing parenthesis in IF statement");
    //     yyerrok;
    // }
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
    // | WHILE error RPAREN LBRACE statement_list RBRACE {
    //     syntaxError("Malformed condition in WHILE loop");
    //     loop_depth--;
    //     yyerrok;
    // }
    // | WHILE LPAREN condition error LBRACE statement_list RBRACE {
    //     syntaxError("Missing closing parenthesis in WHILE loop");
    //     loop_depth--;
    //     yyerrok;
    // }
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
    // | FOR error RPAREN LBRACE statement_list RBRACE {
    //     syntaxError("Malformed FOR loop structure");
    //     loop_depth--;
    //     exit_scope();
    //     yyerrok;
    // }
    ;


switch_stmt:
    SWITCH LPAREN IDENTIFIER RPAREN 
    { 
        if (checkVariableDeclared($3)) {
            if (!checkVariableInitialized($3)) {
                // Error already reported
            } else {
                update_symbol_used($3);
            }
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
    | SWITCH error RPAREN LBRACE case_list RBRACE {
        syntaxError("Malformed SWITCH statement");
        switch_depth--;
        exit_scope();
        yyerrok;
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
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    }
    ;

default_case:
    DEFAULT COLON statement_list
    {
        if ($3 == 0) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    }
    ;

function_decl:
    function_name LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    { 
        printf("Function declaration executed\n");
        clearCurrentFunction();
        exit_scope(); 
    }
    | function_name LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        printf("Function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope(); 
    }
    | function_name_void LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    { 
        printf("Void function declaration executed\n"); 
        clearCurrentFunction();
        exit_scope();
    }
    | function_name_void LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        printf("Void function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope();
    }
    ;

function_name:
    type IDENTIFIER 
    {
        if (insert_symbol($2, $1, FUNCTION, 0)) {
            setCurrentFunction($2, $1);
            enter_scope($2);
        } else {
            semanticError("Function declaration failed");
        }
        $$ = $2;
    };

function_name_void:
    VOID_TYPE IDENTIFIER 
    {
        if (insert_symbol($2, TYPE_VOID, FUNCTION, 0)) {
            setCurrentFunction($2, TYPE_VOID);
            enter_scope($2);
        } else {
            semanticError("Void function declaration failed");
        }
        $$ = $2;
    };

parameter_list:
    parameter
    | parameter_list COMMA parameter
 
    ;

parameter:
    type IDENTIFIER
    {
        if (!insert_symbol($2, $1, PARAMETER, 0)) {
            semanticError("Parameter declaration failed");
        }
    }
    ;

return_stmt:
    RETURN expression SEMICOLON
    {
        if (current_function_name) {
            checkReturn(current_function_name, $2, 1);
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN statement executed\n");
    }
    | RETURN SEMICOLON
    {
        if (current_function_name) {
            checkReturn(current_function_name, TYPE_VOID, 0);
        } else {
            semanticError("Return statement outside of function");
        }
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
    // | DO LBRACE statement_list RBRACE WHILE error SEMICOLON {
    //     syntaxError("Malformed condition in DO-WHILE loop");
    //     loop_depth--;
    //     yyerrok;
    // }
    ;

argument_list:
    expression
    {
        argument_count = 1;
        argument_types[0] = $1;  
        $$ = $1;  // Pass through the type
    }
    | argument_list COMMA expression
    {
        argument_types[argument_count] = $3;  
        argument_count++;
        $$ = $3;  // Pass through the type (or you could pass the first type)
    }
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

    if(yyparse() == 0) {
        printf("\nParsing completed successfully.\n");
    } else {
        printf("\nParsing failed.\n");
    }

    // Print error summary
    printErrorSummary();

    // Return non-zero if there are any errors
    if (count_syntax_errors > 0 || count_semantic_errors > 0) {
        return 1;
    }

    return 0;
}
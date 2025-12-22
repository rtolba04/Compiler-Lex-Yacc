%code requires {
#include "symbol_table.h"
#include "semantic_checks.h"
#include "quad.h"

typedef struct {
    char *Lstart;
    char *Lend;
} WhileLabels;

typedef struct {
    int type;      // TYPE_BOOL, TYPE_INT, ...
    char *place;   // temp name or variable name
} Attr;
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

static char *current_func_name = NULL;
static char *current_func_end  = NULL;
%}

%union {
    int integer;      
    float floatval;     
    char *string;     
    char charval;  
    DataType datatype;   
    WhileLabels *wlbl;
    Attr attr;
   

   
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
%token <string> IDENTIFIER STRING_LITERAL
%token <integer> NUMBER 
%token <floatval> FLOAT 
%token <charval> CHAR_LITERAL


%type <attr> expression condition T F assign argument_list bool_expression 

%type <integer>   statement statement_list break_stmt block switch_stmt 
%type <datatype> type
%type <wlbl> M_while M_if if_begin
%type <wlbl> M_do
%type <string> function_name function_name_void 
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
    | return_stmt { $$ = 2; }
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
            emit("ASSIGN", $5.place, NULL, $3);
        } else {
            semanticError("Const variable declaration failed");
        }
    }
    | type IDENTIFIER ASSIGN expression SEMICOLON
    {
        SymbolEntry *entry = insert_symbol($2, $1, VARIABLE, 0);
        if (entry) {
            entry->is_initialized = 1;
            emit("ASSIGN", $4.place, NULL, $2);
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
            emit("ASSIGN", $4.place, NULL, $2);
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
    TRUE_COND            { 
        $$.place = strdup("1");
        $$.type = TYPE_BOOL;
     }
    | FALSE_COND         {
        $$.place = strdup("0");
        $$.type = TYPE_BOOL;
    }
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
        DataType lhsType = getType($1);
        DataType rhsType = $3.type;
        if (!checkVariableDeclared($1)) {
            
        } else {
            // Check const reassignment
            if (!checkConstReassignment($1)) {
                // Error already reported
            } else {
                // Check type compatibility
                if (!areTypesCompatible(lhsType, rhsType))  
                {
                char error_msg[256];
                snprintf(error_msg, sizeof(error_msg),
                        "Type mismatch in assignment to '%s': cannot assign %s to %s",
                        $1,
                        dataTypeToString(rhsType), 
                        dataTypeToString(lhsType));
                semanticError(error_msg);
                }
                else {
                       if (!update_symbol_initialized($1)) {
                    semanticError("Failed to update symbol initialization");
                }
                else{
                    emit("ASSIGN", $3.place, NULL, $1);
                }
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
                emit("ASSIGN", $3.place, NULL, $1);

            }
        } 
    }
    ;
    
expression:
    expression PLUS T {
        
        $$.type = resolveType($1.type, $3.type);

        char *t = newTemp();
        emit("ADD", $1.place, $3.place, t);
        $$.place = t;
    }

    | expression MINUS T {
            $$.type = resolveType($1.type, $3.type);

            char *t = newTemp();
            emit("SUB", $1.place, $3.place, t);
            $$.place = t;
        }

    | T {
            $$ = $1;
        }
;
 

T:
    T MULTIPLY F {
        $$.type = resolveType($1.type, $3.type);

        char *t = newTemp();
        emit("MUL", $1.place, $3.place, t);
        $$.place = t;
    }
    | T DIVIDE F {
    if ($3.type == TYPE_INT && $3.place==0) {
        checkDivisionByZero(0);
        $$.type = TYPE_UNKNOWN;
        $$.place = NULL;
    } else {
        $$.type = resolveType($1.type, $3.type);
        char *t = newTemp();
        emit("DIV", $1.place, $3.place, t);
        $$.place = t;
    }
    }
    | T MODULO F {
    if ($1.type != TYPE_INT || $3.type != TYPE_INT) {
        semanticError("Modulo operator requires integer operands");
        $$.type = TYPE_UNKNOWN;
        $$.place = NULL;
    } else {
        $$.type = TYPE_INT;

        char *t = newTemp();
        emit("MOD", $1.place, $3.place, t);
        $$.place = t;
    }
    }
    | F {
        $$ = $1;
    }
;


F:
    LPAREN condition RPAREN  { $$ = $2; }
    | MINUS F {
        if ($2.type != TYPE_INT && $2.type != TYPE_FLOAT) {
            semanticError("Unary minus requires numeric operand");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        } else {
            $$.type = $2.type;

            char *t = newTemp();
            emit("NEG", $2.place, NULL, t);
            $$.place = t;
        }
    }                   
    | IDENTIFIER {
        if (checkVariableDeclared($1)) {
            if (checkVariableInitialized($1)) {
                update_symbol_used($1);
                $$.type = getType($1);
                $$.place = $1;  
               
            } else {
                $$.type = TYPE_UNKNOWN;
                $$.place = NULL;
            }
        } else {
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
    }
      | IDENTIFIER LPAREN argument_list RPAREN {
        if (checkFunctionCall($1, argument_types, argument_count)) {
            update_symbol_used($1);
            $$.type = getType($1); //this will get the return type of the function since it is what is stored in the symbol table 
            char buf[32];
            snprintf(buf, sizeof(buf), "%d", argument_count);
            char *t = newTemp();
            emit("CALL", $1, strdup(buf), t);
            $$.place = t;
        } else {
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        argument_count = 0;
    }
    | IDENTIFIER LPAREN RPAREN {
        if (checkFunctionCall($1, NULL, 0)) {
            update_symbol_used($1);
            $$.type = getType($1);

            char *t = newTemp();
            emit("CALL", $1, "0", t);
            $$.place = t;
        } else {
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
    }
    | FLOAT {
    $$.type = TYPE_FLOAT;
    char buf[64];
    snprintf(buf, sizeof(buf), "%f", $1);  
    $$.place = strdup(buf); 
    }

    | NUMBER {
        char buf[32];
          snprintf(buf, sizeof(buf), "%d", $1);
          $$.place = strdup(buf); 
        $$.type = TYPE_INT;
        
    }
    | STRING_LITERAL {
        $$.type = TYPE_STRING;
        $$.place = strdup($1);
    }
    | CHAR_LITERAL {
        $$.type = TYPE_CHAR;
        char buf[10];
        snprintf(buf, sizeof(buf), "'%c'", $1);
        $$.place = strdup(buf);
    }
    | TRUE_COND {
        $$.type = TYPE_BOOL;
        $$.place = strdup("1");
    }

    | FALSE_COND {
        $$.type = TYPE_BOOL;
        $$.place = strdup("0");
    }
;

   

condition:
    expression EQUAL expression  { 
        if (!areTypesCompatible($1.type, $3.type)) {
            semanticError("Type mismatch in equality comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("EQ", $1.place, $3.place, t);
        $$.place = t;
        }
    }
    | expression NOT_EQUAL expression { 
        if (!areTypesCompatible($1.type, $3.type)) {
            semanticError("Type mismatch in inequality comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("NE", $1.place, $3.place, t);
        $$.place = t; 
        }
    }
    | expression LESS_THAN expression { 
        if (!(($1.type == TYPE_INT || $1.type == TYPE_FLOAT) &&
              ($3.type == TYPE_INT || $3.type == TYPE_FLOAT))) {
            semanticError("Type mismatch in less-than comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("LT", $1.place, $3.place, t);
        $$.place = t; 
        }
    }
    | expression GREATER_THAN expression { 
        if (!(($1.type == TYPE_INT || $1.type == TYPE_FLOAT) &&
              ($3.type == TYPE_INT || $3.type == TYPE_FLOAT))) {
            semanticError("Type mismatch in greater-than comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("GT", $1.place, $3.place, t);
        $$.place = t; 
        }
    }
    | expression LESS_EQUAL expression { 
        if (!(($1.type == TYPE_INT || $1.type == TYPE_FLOAT) &&
              ($3.type == TYPE_INT || $3.type == TYPE_FLOAT))) {
            semanticError("Type mismatch in less-than-or-equal comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("LE", $1.place, $3.place, t);
        $$.place = t; 
        }
    }
    | expression GREATER_EQUAL expression { 
        if (!(($1.type == TYPE_INT || $1.type == TYPE_FLOAT) &&
              ($3.type == TYPE_INT || $3.type == TYPE_FLOAT))) {
            semanticError("Type mismatch in greater-than-or-equal comparison");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("GE", $1.place, $3.place, t);
        $$.place = t; 
        }
    }
    | expression AND expression { 
        if ($1.type != TYPE_BOOL || $3.type != TYPE_BOOL) {
            semanticError("Logical AND requires boolean operands");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("AND", $1.place, $3.place, t);
        $$.place = t;
        } 
    }
    | expression OR expression { 
        if ($1.type != TYPE_BOOL || $3.type != TYPE_BOOL) {
            semanticError("Logical OR requires boolean operands");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("OR", $1.place, $3.place, t);
        $$.place = t;
        } 
    }
    | NOT expression { 
        if ($2.type != TYPE_BOOL) {
            semanticError("Logical NOT requires a boolean operand");
            $$.type = TYPE_UNKNOWN;
            $$.place = NULL;
        }
        else {
        $$.type = TYPE_BOOL;
        char *t = newTemp();
        emit("NOT", $2.place, NULL, t);
        $$.place = t;
        }
        
    }
    | expression { $$ = $1; }
    ;

M_if:
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();  // Label for else block
        p->Lend = newLabel();    // Label for end of if-else
      
        $$ = p;

    }
    ;
    
if_stmt:
    // IF-ELSE (needs M_if for 2 labels)
    if_begin 
    ELSE
    {
        emit("JMP", NULL, NULL, $1->Lend);         // Jump to end
        emit("LABEL", NULL, NULL, $1->Lstart);     // Else label 
    }
     else_block
    {
        emit("LABEL", NULL, NULL, $1->Lend);       // End label
        free($1);
        printf("IF-ELSE statement executed\n");  
    }
    | if_begin
    {
        emit("LABEL", NULL, NULL, $1->Lstart);      
    }
    ;

    
if_begin:
    IF LPAREN condition RPAREN M_if{
        emit("JMPF", $3.place, NULL, $5->Lstart);  // Jump to else
    } if_block
    {
        
        $$ = $5;
    }
    ;


if_block:
    LBRACE {enter_scope("if-block");} statement_list {exit_scope();} RBRACE
    ;

else_block:
    LBRACE {enter_scope("else-block");} statement_list {exit_scope();} RBRACE
    ;



M_while:  
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        $$ = p;
    }
    ; 

while_stmt:
    WHILE M_while LPAREN condition RPAREN 
    {   emit("JMPF", $4.place, NULL, $2->Lend);
        loop_depth++; 
    }
    LBRACE {enter_scope("while");} statement_list {exit_scope();} RBRACE  
    { 
        emit("JMP", NULL, NULL, $2->Lstart);
        emit("LABEL", NULL, NULL, $2->Lend);
        free($2);
        loop_depth--;
        printf("WHILE loop executed\n"); 
    }
    /* | WHILE error RPAREN LBRACE statement_list RBRACE {
        syntaxError("Malformed condition in WHILE loop");
        loop_depth--;
        yyerrok;
    }
    | WHILE LPAREN condition error LBRACE statement_list RBRACE {
        syntaxError("Missing closing parenthesis in WHILE loop");
        loop_depth--;
        yyerrok;
    } */
    ;

for_stmt:
    FOR 
    { enter_scope("for-loop"); }
    LPAREN declaration_stmt
    {
      $<string>$ = newLabel();  // Save start label
      emit("LABEL", NULL, NULL, $<string>$);
    } 
    condition 
    {
        $<string>$ = newLabel();  // Save end label
        emit("JMPF", $6.place, NULL, $<string>$);  
    }
    SEMICOLON 
    {
        delay_emit = 1;   // STOP assign from emitting
    }
    assign
    {
        delay_emit = 0;   // Resume normal emission
    }
    RPAREN 
    { loop_depth++; }
    LBRACE statement_list RBRACE  
    { 
        flush_delayed();  // Emit any delayed quads
        emit("JMP", NULL, NULL, $<string>5);
        
        // Place end label
        emit("LABEL", NULL, NULL, $<string>7);

        loop_depth--;
        printf("FOR loop executed\n");
        exit_scope(); 
    }
    | FOR error RPAREN LBRACE statement_list RBRACE {
        syntaxError("Malformed FOR loop structure");
        loop_depth--;
        exit_scope();
        yyerrok;
    }
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
        if ($4 != 1) {
            semanticError("Case must end with a 'break;' statement");
        }
        printf("CASE executed successfully with mandatory break\n");
    }
    ;

default_case:
    DEFAULT COLON statement_list
    {
        if ($3 != 1) {
            semanticError("Default case must end with a 'break;' statement");
        }
        printf("DEFAULT case executed successfully with mandatory break\n");
    }
    ;

function_decl:
    function_name LPAREN parameter_list RPAREN LBRACE statement_list RBRACE 
    { 

        if($6 != 2) {
            semanticError("Function must end with a return statement");
        }
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);

        current_func_end  = NULL;
        current_func_name = NULL;
        printf("Function declaration executed\n");
        clearCurrentFunction();
        exit_scope(); 
    }
    | function_name LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
        if($5 != 2) {
            semanticError("Function must end with a return statement");
        }
        printf("Function declaration (no parameters) executed\n"); 
        clearCurrentFunction();
        exit_scope(); 
    }
    | function_name_void LPAREN parameter_list RPAREN LBRACE statement_list RBRACE
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
        printf("Void function declaration executed\n"); 
        clearCurrentFunction();
        exit_scope();
    }
    | function_name_void LPAREN RPAREN LBRACE statement_list RBRACE
    { 
        emit("LABEL", NULL, NULL, current_func_end);
        emit("FUNC_END", current_func_name, NULL, NULL);
        current_func_end  = NULL;
        current_func_name = NULL;
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
            current_func_name = $2;
            current_func_end  = newLabel();

            emit("FUNC_BEGIN", current_func_name, NULL, NULL);
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
            current_func_name = $2;
            current_func_end  = newLabel();
            emit("FUNC_BEGIN", current_func_name, NULL, NULL);
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
            if(checkReturn(current_function_name, $2.type, 1)) {
                // Return type matches
                emit("RETURN", $2.place, NULL, NULL);              // simplest

                // jump to common function end
                emit("JMP", NULL, NULL, current_func_end);
                
            }
        } else {
            semanticError("Return statement outside of function");
        }
      
        printf("RETURN statement executed\n");
    }
    | RETURN SEMICOLON
    {
        if (current_function_name) {
            if(checkReturn(current_function_name, TYPE_VOID, 0)) {
                // Return type matches
                emit("RETURN", NULL, NULL, NULL);              // simplest

                // jump to common function end
                emit("JMP", NULL, NULL, current_func_end);
                
            }
        } else {
            semanticError("Return statement outside of function");
        }
        printf("RETURN (void) statement executed\n");
    }
    ;

M_do:
    /* empty */
    {
        WhileLabels *p = (WhileLabels*)calloc(1, sizeof(WhileLabels));
        p->Lstart = newLabel();
        p->Lend   = newLabel();
        emit("LABEL", NULL, NULL, p->Lstart);
        $$ = p;
    }
;

do_while_stmt:
    DO M_do do_block WHILE LPAREN condition RPAREN SEMICOLON
    {
        emit("JMPF", $6.place, NULL, $2->Lend);
        emit("JMP",  NULL, NULL, $2->Lstart);
        emit("LABEL", NULL, NULL, $2->Lend);
      
        printf("DO-WHILE loop executed\n");
    }
    | DO error SEMICOLON
    {
        syntaxError("Malformed DO-WHILE loop");
        loop_depth = 0; // Reset in case it was incremented
        yyerrok;
    }
    /* | DO do_block WHILE error SEMICOLON
    {
        syntaxError("Malformed condition in DO-WHILE loop");
        yyerrok;
    }
    | DO do_block WHILE LPAREN error RPAREN SEMICOLON
    {
        syntaxError("Malformed condition in DO-WHILE loop");
        yyerrok;
    }
    | DO do_block WHILE LPAREN condition error
    {
        syntaxError("Missing closing parenthesis in DO-WHILE loop");
        yyerrok;
    } */
    ;

/* Helper nonterminal to avoid duplicated actions and reduce conflicts */


do_block:
    { loop_depth++; } LBRACE { enter_scope("do-while"); } statement_list { exit_scope(); } RBRACE { loop_depth--; }
    ;

argument_list:
    expression
    {
        argument_count = 1;
        argument_types[0] = $1.type; 
        emit("PARAM", $1.place, NULL, NULL); 
        $$ = $1;  // Pass through the type
    }
    | argument_list COMMA expression
    {
        argument_types[argument_count] = $3.type;  
        argument_count++;
        emit("PARAM", $3.place, NULL, NULL); 
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
        print_quads();
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
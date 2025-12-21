#ifndef SEMANTIC_CHECKS_H
#define SEMANTIC_CHECKS_H

#include "symbol_table.h"
#include <stdio.h>

// Error counters
extern int count_semantic_errors;
extern int count_syntax_errors;
extern int line_num;

// Current function tracking
extern char *current_function_name;
extern DataType current_function_return_type;

// Function prototypes for semantic checks
void semanticError(const char *message);
void syntaxError(const char *message);

// Type checking
int areTypesCompatible(DataType lhs, DataType rhs);
DataType resolveType(DataType type1, DataType type2);
DataType getType(const char *identifier);

// Variable checks
int checkVariableInitialized(const char *name);
int checkConstReassignment(const char *name);
int checkVariableDeclared(const char *name);

// Function checks
void setCurrentFunction(const char *name, DataType return_type);
void clearCurrentFunction();
int checkReturn(const char *func_name, DataType return_type, int has_value);
int checkFunctionCall(const char *func_name, DataType *arg_types, int arg_count);

// Boolean condition checks
int checkBooleanCondition(DataType condition_type);

// Division by zero check
int checkDivisionByZero(int divisor);

// Loop/Switch context checks
int checkBreakContext(int loop_depth, int switch_depth);

// Print error summary
void printErrorSummary();

// Utility function to convert DataType to string
const char *dataTypeToString(DataType type);

#endif
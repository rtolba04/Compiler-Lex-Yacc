#include "semantic_checks.h"
#include "symbol_table.h"
#include <string.h>

// Error counters
int count_semantic_errors = 0;
int count_syntax_errors = 0;

// Current function tracking
char *current_function_name = NULL;
DataType current_function_return_type = TYPE_VOID;

// Error reporting functions
void semanticError(const char *message)
{
    fprintf(stderr, "Semantic Error at line %d: %s\n", line_num, message);
    count_semantic_errors++;
}

void syntaxError(const char *message)
{
    fprintf(stderr, "Syntax Error at line %d: %s\n", line_num, message);
    count_syntax_errors++;
}

// Type compatibility checking
int areTypesCompatible(DataType lhs, DataType rhs)
{
    // Exact match
    if (lhs == rhs)
    {
        return 1;
    }

    // Allow int to float conversion
    if ((lhs == TYPE_FLOAT && rhs == TYPE_INT) ||
        (lhs == TYPE_INT && rhs == TYPE_FLOAT))
    {
        return 1;
    }

    // Unknown types are incompatible
    if (lhs == TYPE_UNKNOWN || rhs == TYPE_UNKNOWN)
    {

        return 0;
    }

    return 0;
}

// Resolve type for binary operations
DataType resolveType(DataType type1, DataType type2)
{
    if (type1 == TYPE_UNKNOWN || type2 == TYPE_UNKNOWN)
    {
        semanticError("Cannot perform operation on unknown types");
        return TYPE_UNKNOWN;
    }

    // If either is float, result is float
    if (type1 == TYPE_FLOAT || type2 == TYPE_FLOAT)
    {
        return TYPE_FLOAT;
    }

    // If both are int, result is int
    if (type1 == TYPE_INT && type2 == TYPE_INT)
    {
        return TYPE_INT;
    }

    // For boolean operations
    if (type1 == TYPE_BOOL && type2 == TYPE_BOOL)
    {
        return TYPE_BOOL;
    }

    // Type mismatch
    semanticError("Type mismatch in operation");
    return TYPE_UNKNOWN;
}

// Get type of identifier
DataType getType(const char *identifier)
{
    SymbolEntry *entry = lookup_symbol(identifier);

    if (!entry)
    {
        // char error_msg[256];
        // snprintf(error_msg, sizeof(error_msg),
        //          "Undeclared variable '%s'", identifier);
        // semanticError(error_msg);
        return TYPE_UNKNOWN;
    }

    return entry->type;
}

// Check if variable is initialized before use
int checkVariableInitialized(const char *name)
{
    SymbolEntry *entry = lookup_symbol(name);

    if (!entry)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Variable '%s' not declared", name);
        semanticError(error_msg);
        return 0;
    }

    if (!entry->is_initialized)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Variable '%s' used before initialization", name);
        semanticError(error_msg);
        return 0;
    }

    return 1;
}

// Check const reassignment
int checkConstReassignment(const char *name)
{
    SymbolEntry *entry = lookup_symbol(name);

    if (!entry)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Variable '%s' not declared", name);
        semanticError(error_msg);
        return 0;
    }

    if (entry->is_const && entry->is_initialized)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Cannot reassign const variable '%s'", name);
        semanticError(error_msg);
        return 0;
    }

    return 1;
}

// Check if variable is declared
int checkVariableDeclared(const char *name)
{
    SymbolEntry *entry = lookup_symbol(name);

    if (!entry)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Undeclared variable '%s'", name);
        semanticError(error_msg);
        return 0;
    }

    return 1;
}

// Set current function context
void setCurrentFunction(const char *name, DataType return_type)
{
    if (current_function_name)
    {
        free(current_function_name);
    }
    current_function_name = strdup(name);
    current_function_return_type = return_type;
}

// Clear current function context
void clearCurrentFunction()
{
    if (current_function_name)
    {
        free(current_function_name);
        current_function_name = NULL;
    }
    current_function_return_type = TYPE_VOID;
}

// Check return statement
int checkReturn(const char *func_name, DataType return_type, int has_value)
{
    if (!func_name)
    {
        syntaxError("Return statement outside of function");
        return 0;
    }

    SymbolEntry *func_entry = lookup_symbol(func_name);
    if (!func_entry)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Function '%s' not found", func_name);
        semanticError(error_msg);
        return 0;
    }

    // Check void function returning a value
    if (func_entry->type == TYPE_VOID && has_value)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Void function '%s' cannot return a value", func_name);
        syntaxError(error_msg);
        return 0;
    }

    // Check non-void function not returning a value
    if (func_entry->type != TYPE_VOID && !has_value)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Non-void function '%s' must return a value", func_name);
        syntaxError(error_msg);
        return 0;
    }

    // Check return type compatibility
    if (has_value && !areTypesCompatible(func_entry->type, return_type))
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Return type mismatch in function '%s'", func_name);
        semanticError(error_msg);
        return 0;
    }
    if(!has_value && func_entry->type != TYPE_VOID)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Return type mismatch in function '%s'", func_name);
        semanticError(error_msg);
        return 0;
    }

    return 1;
}

// Check function call
int checkFunctionCall(const char *func_name, DataType *arg_types, int arg_count)
{
    SymbolEntry *entry = lookup_symbol(func_name);

    if (!entry)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Undeclared function '%s'", func_name);
        semanticError(error_msg);
        return 0;
    }

    if (entry->kind != FUNCTION)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "'%s' is not a function", func_name);
        semanticError(error_msg);
        return 0;
    }

    // Check parameter count
    if (entry->param_count != arg_count)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg),
                 "Function '%s' expects %d arguments but got %d",
                 func_name, entry->param_count, arg_count);
        semanticError(error_msg);
        return 0;
    }

    // Check parameter types
    for (int i = 0; i < arg_count; i++)
    {
        if (entry->param_types[i] != arg_types[i])
        {
            char error_msg[256];
            snprintf(error_msg, sizeof(error_msg),
                     "Type mismatch for argument %d of function '%s': expected %s, got %s",
                     i + 1, func_name,
                     dataTypeToString(entry->param_types[i]),
                     dataTypeToString(arg_types[i]));
            semanticError(error_msg);
            return 0;
        }
    }

    // Mark function as used
    entry->is_used = 1;

    return 1;
}

// Check boolean condition
int checkBooleanCondition(DataType condition_type)
{
    if (condition_type != TYPE_BOOL &&
        condition_type != TYPE_INT &&
        condition_type != TYPE_UNKNOWN)
    {
        semanticError("Condition must be boolean or integer type");
        return 0;
    }
    return 1;
}

// Check division by zero
int checkDivisionByZero(int divisor)
{
    if (divisor == 0)
    {
        syntaxError("Division by zero");
        return 0;
    }
    return 1;
}

// Check break context
int checkBreakContext(int loop_depth, int switch_depth)
{
    if (loop_depth == 0 && switch_depth == 0)
    {
        syntaxError("'break' statement not within loop or switch");
        return 0;
    }
    return 1;
}

// Print error summary
void printErrorSummary()
{
    printf("\n=== Compilation Summary ===\n");
    printf("Syntax errors: %d\n", count_syntax_errors);
    printf("Semantic errors: %d\n", count_semantic_errors);

    if (count_syntax_errors > 0 || count_semantic_errors > 0)
    {
        printf("Compilation failed.\n");
    }
    else
    {
        printf("Compilation successful. No errors found.\n");
    }
}
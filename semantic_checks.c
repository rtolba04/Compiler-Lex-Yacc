#include "semantic_checks.h"
#include <stdio.h>
#include <string.h>

extern Scope* current_scope;
extern int line_num;
extern int count_semantic_errors;


void semanticError(const char* msg) {
    fprintf(stderr, "Semantic Error at line %d: %s\n", line_num, msg);
    count_semantic_errors++;
}

DataType resolveType(DataType type1, DataType type2) {
    if (type1 == TYPE_UNKNOWN || type2 == TYPE_UNKNOWN) return TYPE_UNKNOWN;
    if (type1 == TYPE_FLOAT || type2 == TYPE_FLOAT) return TYPE_FLOAT;
    if (type1 == TYPE_INT && type2 == TYPE_INT) return TYPE_INT;
    if (type1 == TYPE_CHAR && type2 == TYPE_CHAR) return TYPE_CHAR;
    if (type1 == TYPE_BOOL && type2 == TYPE_BOOL) return TYPE_BOOL;
    if ((type1 == TYPE_INT && type2 == TYPE_BOOL) ||
        (type1 == TYPE_BOOL && type2 == TYPE_INT)) return TYPE_BOOL;
    return TYPE_UNKNOWN;
}

int areTypesCompatible(DataType expected, DataType actual) {
    if (expected == actual) return 1;
    if ((expected == TYPE_INT && actual == TYPE_BOOL) ||
        (expected == TYPE_BOOL && actual == TYPE_INT)) return 1;
    return 0;
}

void checkReturn(const char* funcName, DataType returnExprType, int hasExpr) {
    SymbolEntry* func = lookup_symbol(funcName);
    if (!func || func->kind != FUNCTION) return;
    if (func->type == TYPE_VOID && hasExpr) semanticError("Void function cannot return a value");
    else if (func->type != TYPE_VOID && !hasExpr) semanticError("Non-void function must return a value");
    else if (func->type != TYPE_VOID && !areTypesCompatible(func->type, returnExprType)) semanticError("Return type mismatch");
}

void checkConstAssignment(const char* name) {
    SymbolEntry* entry = lookup_symbol(name);
    if (entry && entry->is_const && entry->is_initialized) {
        char buf[128];
        sprintf(buf, "Cannot reassign const variable '%s'", name);
        semanticError(buf);
    }
}


void checkUnusedFunctions() {
    Scope* global = current_scope;
    while (global->parent) global = global->parent;
    for (int i = 0; i < HASH_SIZE; i++) {
        SymbolEntry* entry = global->symbols[i];
        while (entry) {
            if (entry->kind == FUNCTION && !entry->is_used)
                printf("Warning: Function '%s' declared but never used\n", entry->name);
            entry = entry->next;
        }
    }
}
#ifndef SEMANTIC_CHECKS_H
#define SEMANTIC_CHECKS_H
#include "symbol_table.h"

void semanticError(const char* msg);
DataType resolveType(DataType type1, DataType type2);
int areTypesCompatible(DataType expected, DataType actual);
void checkReturn(const char* funcName, DataType returnExprType, int hasExpr);
void checkConstAssignment(const char* name);
void checkUnusedFunctions();

#endif
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASH_SIZE 211
#define MAX_ARGS 10

typedef enum
{
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_CHAR,
    TYPE_STRING,
    TYPE_BOOL,
    TYPE_VOID,
    TYPE_UNKNOWN
} DataType;

typedef enum
{
    VARIABLE,
    FUNCTION,
    PARAMETER
} SymbolKind;

extern DataType argument_types[MAX_ARGS];
extern int argument_count;

typedef struct SymbolEntry
{
    char *name;
    DataType type;
    SymbolKind kind;
    int is_const;
    int is_initialized;
    int is_used;
    // these were added on purpose to check function parameters later
    int param_count;
    DataType *param_types;
    char **param_names;
    struct SymbolEntry *next; //  (hash collisions)
} SymbolEntry;

typedef struct Scope
{
    int id;
    int level;
    char *name;
    struct Scope *parent;
    SymbolEntry *symbols[HASH_SIZE];
    // int symbol_count;         // Number of symbols in this scope
} Scope;

void CreateSymbolTable();
void enter_scope(const char *scope_name);
void exit_scope();
SymbolEntry *insert_symbol(const char *name, DataType type, SymbolKind kind, int is_const);
SymbolEntry *lookup_symbol(const char *name);

int update_symbol_initialized(const char *name);
int update_symbol_used(const char *name);

unsigned int hash_function(const char *str);

void print_symbol_table_recursive(Scope *scope, FILE *file);
void print_symbol_table();

SymbolEntry *lookup_in_scope(Scope *scope, const char *name);
void save_function_parameters(SymbolEntry *func_entry, Scope *func_scope);

// Helper function to convert DataType enum to string
const char *dataTypeToString(DataType type);
// Helper function to convert SymbolKind enum to string
const char *symbolKindToString(SymbolKind kind);
#endif

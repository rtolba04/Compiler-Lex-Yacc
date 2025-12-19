#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASH_SIZE 211
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

typedef struct SymbolEntry
{
    char *name;
    DataType type;
    SymbolKind kind;
    int is_const;
    int is_initialized;
    int is_used;

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
void enter_scope();
void exit_scope();
SymbolEntry *insert_symbol(const char *name, DataType type, SymbolKind kind, int is_const);
SymbolEntry *lookup_symbol(const char *name);

int update_symbol_initialized(const char *name);
int update_symbol_used(const char *name);

// void destroy_symbol_table(SymbolTable *table);

// // Scope Management

// void exit_scope(SymbolTable *table);
// Scope* get_current_scope(SymbolTable *table);
// Scope* get_global_scope(SymbolTable *table);

// Symbol Operations

// SymbolEntry* lookup_symbol_current_scope(SymbolTable *table, const char *name);

// // Utility Functions
// void print_symbol_table(SymbolTable *table);
// void print_scope(SymbolTable *table, Scope *scope);
// int get_symbol_count(SymbolTable *table);
// int check_unused_variables(SymbolTable *table);

unsigned int hash_function(const char *str);

#endif
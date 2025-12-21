#include "symbol_table.h"
static Scope *current_scope = NULL;
DataType argument_types[MAX_ARGS];
int argument_count = 0;

unsigned int hash_function(const char *str)
{
    unsigned int hash = 0;
    while (*str)
    {
        hash = (hash * 31) + *str;
        str++;
    }
    return hash % HASH_SIZE;
}

void CreateSymbolTable()
{
    Scope *global_scope = calloc(1, sizeof(Scope)); // allocate mem fpor one scope
    global_scope->id = 0;
    global_scope->level = 0;
    global_scope->name = strdup("global");
    global_scope->parent = NULL;
    for (int i = 0; i < HASH_SIZE; i++)
    {
        global_scope->symbols[i] = NULL;
    }
    current_scope = global_scope;
}

void enter_scope(const char *scope_name)
{
    Scope *new_scope = calloc(1, sizeof(Scope));
    new_scope->id = current_scope->id + 1;
    new_scope->level = current_scope->level + 1;
    new_scope->name = scope_name ? strdup(scope_name) : NULL;
    new_scope->parent = current_scope;
    for (int i = 0; i < HASH_SIZE; i++)
    {
        new_scope->symbols[i] = NULL;
    }
    current_scope = new_scope;
    // printf("printing after entering scope:\n");
    // print_symbol_table();
}

void exit_scope()
{
    // print_symbol_table();
    if (current_scope && current_scope->parent)
    {
        Scope *scope_to_delete = current_scope;
        if (scope_to_delete->name)
        {
            SymbolEntry *func_entry = lookup_in_scope(scope_to_delete->parent,
                                                      scope_to_delete->name);

            if (func_entry && func_entry->kind == FUNCTION)
            {
                // Save parameter information from this scope in the parent scope
                save_function_parameters(func_entry, scope_to_delete);
            }
        }

        // Check for unused variables before exiting
        for (int i = 0; i < HASH_SIZE; i++)
        {
            SymbolEntry *entry = scope_to_delete->symbols[i];
            while (entry)
            {
                if (entry->kind == VARIABLE && !entry->is_used)
                {
                    printf("Warning: Variable '%s' declared but never used in scope %d\n",
                           entry->name, scope_to_delete->id);
                }

                SymbolEntry *next = entry->next;
                free(entry->name);
                free(entry);
                entry = next;
            }
        }

        // Move to parent scope
        current_scope = current_scope->parent;

        // Free the scope
        if (scope_to_delete->name)
            free(scope_to_delete->name);
        free(scope_to_delete);
    }
    // printf("printing after exiting scope:\n");
    // print_symbol_table();
}

SymbolEntry *insert_symbol(const char *name, DataType type, SymbolKind kind, int is_const)
{

    unsigned int index = hash_function(name);

    SymbolEntry *entry = current_scope->symbols[index];
    // if previously declared in this scope it will be at the same hash value
    while (entry != NULL)
    {
        if (strcmp(entry->name, name) == 0)
        {
            printf("Error: Variable '%s' already declared in this scope\n", name);
            return NULL;
        }
        entry = entry->next;
    }

    SymbolEntry *new_entry = calloc(1, sizeof(SymbolEntry));
    new_entry->name = strdup(name);
    new_entry->type = type;
    new_entry->kind = kind;
    new_entry->is_const = is_const;
    new_entry->is_initialized = 0;
    new_entry->is_used = 0;

    if (kind == PARAMETER)
    {
        // For parameters, mark as initialized
        new_entry->is_initialized = 1;
    }

    // inserting in a linked list
    new_entry->next = current_scope->symbols[index];
    current_scope->symbols[index] = new_entry;
    // print_symbol_table();
    return new_entry;
}

SymbolEntry *lookup_symbol(const char *name)
{
    Scope *scope = current_scope;

    while (scope != NULL)
    {
        unsigned int index = hash_function(name);
        SymbolEntry *entry = scope->symbols[index];

        // Search in linked list at this hash index
        while (entry != NULL)
        {
            if (strcmp(entry->name, name) == 0)
            {
                return entry;
            }
            entry = entry->next;
        }

        // recurse to parent scope
        scope = scope->parent;
    }
    return NULL; // if this reached than not found
}

int update_symbol_initialized(const char *name)
{
    SymbolEntry *entry = lookup_symbol(name);
    if (entry == NULL)
    {
        printf("Error: Symbol '%s' not found\n", name);
        return 0;
    }

    if (entry->is_const && entry->is_initialized)
    {
        printf("Error: Cannot reassign const variable '%s'\n", name);
        return 0;
    }

    entry->is_initialized = 1;
    // print_symbol_table();
    return 1;
}

int update_symbol_used(const char *name)
{
    SymbolEntry *entry = lookup_symbol(name);
    if (entry == NULL)
    {
        printf("Error: Symbol '%s' not declared\n", name);
        return 0;
    }

    entry->is_used = 1;
    // print_symbol_table();
    return 1;
}

void print_symbol_table_recursive(Scope *scope)
{
    if (!scope)
        return;

    // Print this scope
    printf("\n--- Symbol Table (Scope ID: %d, Level: %d, Name: %s) ---\n",
           scope->id,
           scope->level,
           scope->name ? scope->name : "(unnamed)");

    for (int i = 0; i < HASH_SIZE; i++)
    {
        SymbolEntry *entry = scope->symbols[i];
        while (entry)
        {
            printf("Name: %-10s | Type: %-10d | Kind: %-10d | Const: %d | Init: %d | Used: %d",
                   entry->name,
                   entry->type,
                   entry->kind,
                   entry->is_const,
                   entry->is_initialized,
                   entry->is_used);

            // Print function parameter information if it's a function
            if (entry->kind == FUNCTION && entry->param_count > 0)
            {
                printf(" | Parameters: [");
                for (int j = 0; j < entry->param_count; j++)
                {
                    if (j > 0)
                        printf(", ");
                    printf("%s:%d", entry->param_names[j], entry->param_types[j]);
                }
                printf("]");
            }
            else if (entry->kind == FUNCTION && entry->param_count == 0)
            {
                printf(" | Parameters: []");
            }

            printf("\n");
            entry = entry->next;
        }
    }

    printf("--- End of Scope ---\n");

    // Recursively print parent scopes
    if (scope->parent)
    {
        print_symbol_table_recursive(scope->parent);
    }
}
void print_symbol_table()
{
    print_symbol_table_recursive(current_scope);
}

SymbolEntry *lookup_in_scope(Scope *scope, const char *name)
{
    if (!scope)
        return NULL;

    unsigned int index = hash_function(name);
    SymbolEntry *entry = scope->symbols[index];

    while (entry)
    {
        if (strcmp(entry->name, name) == 0)
        {
            return entry;
        }
        entry = entry->next;
    }
    return NULL;
}

void save_function_parameters(SymbolEntry *func_entry, Scope *func_scope)
{
    // Count parameters
    int param_count = 0;
    for (int i = 0; i < HASH_SIZE; i++)
    {
        SymbolEntry *entry = func_scope->symbols[i];
        while (entry)
        {
            if (entry->kind == PARAMETER)
            {
                param_count++;
            }
            entry = entry->next;
        }
    }

    // Allocate arrays
    func_entry->param_count = param_count;
    func_entry->param_types = malloc(param_count * sizeof(DataType));
    func_entry->param_names = malloc(param_count * sizeof(char *));

    int idx = 0;
    for (int i = 0; i < HASH_SIZE; i++)
    {
        SymbolEntry *entry = func_scope->symbols[i];
        while (entry)
        {
            if (entry->kind == PARAMETER)
            {
                func_entry->param_types[idx] = entry->type;
                func_entry->param_names[idx] = strdup(entry->name);
                idx++;
            }
            entry = entry->next;
        }
    }
}
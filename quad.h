#ifndef QUAD_H
#define QUAD_H



char* newTemp(void);
char* newLabel(void);

void emit(const char* op, const char* arg1, const char* arg2, const char* res);
void print_quads(void);



#endif
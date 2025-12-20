#include "quad.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {     //one quad 
    char *op, *a1, *a2, *res;
} Quad;

static Quad *Q = NULL; //array of quads
static int qcount = 0;
static int qcap = 0;  //capacity of quad array (doubles 128 m3 kol increase )

static int temp_id = 0;
static int label_id = 0;

static char* dupstr(const char *s) {  //3ashan law fi quad b one operand yethat makan op2 '-'
    return strdup(s ? s : "-");
}

static void ensure_cap(void) {
    if (qcount < qcap) return; //law fi makan, no issue
    qcap = (qcap == 0) ? 128 : (qcap * 2);
    Q = (Quad*)realloc(Q, sizeof(Quad) * qcap);
    if (!Q) { perror("realloc"); exit(1); }
}



char* newTemp(void) {
    char buf[32];
    snprintf(buf, sizeof(buf), "t%d", ++temp_id);
    return strdup(buf);  //return new temp name as string
}

char* newLabel(void) {
    char buf[32];
    snprintf(buf, sizeof(buf), "L%d", ++label_id);
    return strdup(buf);
}

void emit(const char* op, const char* arg1, const char* arg2, const char* res) {
    ensure_cap();
    Q[qcount].op  = dupstr(op);
    Q[qcount].a1  = dupstr(arg1);
    Q[qcount].a2  = dupstr(arg2);
    Q[qcount].res = dupstr(res);
    qcount++;
}

void print_quads(void) {
    printf("\n===== QUADRUPLES =====\n");
    for (int i = 0; i < qcount; i++) {
        printf("%3d: (%s, %s, %s, %s)\n", i,
               Q[i].op, Q[i].a1, Q[i].a2, Q[i].res);
    }
    printf("======================\n\n");
}

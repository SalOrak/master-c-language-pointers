#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define SIZE 16

struct family {
    char name[SIZE];
    char relationship[SIZE];
    int age;
    struct family *next;
};


void loop( void (*s)(), char* (*i)());
void solution_1();
char *input_1();

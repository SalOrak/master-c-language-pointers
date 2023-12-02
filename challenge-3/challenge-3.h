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


void solution_1();

void get_string_input(char **b);
void get_data(char *name, char **data);
void print_data(char *name, char *data);

#include <stdio.h>
#include <stdlib.h>

#define SIZE 32
#define FILENAME "struct.data"

struct person {
    char name[SIZE]; 
    int age;
};


void s1_SaveRecord();
void s1_ReadRecord();

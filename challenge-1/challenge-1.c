#include <stdio.h>

/* 
 * Basic and straightforward solution
 */
void solution_1(){
    char a;
    char *x;

    int b;
    int *y;

    printf("\tAddress of a: %p\n", &a);
    printf("\tAddress of b: %p\n", &b);

    x = &a;
    y = &b;

    printf("\tAddress of x: %p\n", x);
    printf("\tAddress of y: %p\n", y);
}

/*
 * Declare void pointers and cast respectively. 
 */
void solution_2(){
    char a;
    int b;
    void *x, *y;

    printf("\tAddress of a: %p\n", &a);
    printf("\tAddress of b: %p\n", &b);

    x = (char *)&a;
    y = (int *)&b;

    printf("\tAddress of x: %p\n", x);
    printf("\tAddress of y: %p\n", y);
}


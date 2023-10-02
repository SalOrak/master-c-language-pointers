#include "challenge-3.h"

/**
 * Input function. 
 * Reads a string from the standard input (stdin)
 * Returns it swapping \n to \0
 */
char *input_1(){
    char *c = (char*)malloc(sizeof(char) * SIZE );
    int read;
    fgets(c, SIZE, stdin); 
    for (int i = 0; i < strlen(c); i ++){
        if (c[i] == '\n'){
            c[i] = '\0';
            break;
        }
    }
    return c;
}

/**
 * 
 */
void solution_1(){
    printf("Solution 1\n");
}


void loop( void (*s)() , char* (*i)()){
    printf("Hello world!");
    printf("solution %p\n", s);
    printf("input %p\n", i);

    s();
    char * test = i();
    printf("Test %s\n", test);
    free(test);
}

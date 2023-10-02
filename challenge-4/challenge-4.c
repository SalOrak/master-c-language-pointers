#include "challenge-4.h"

/*
 * First version of the get_input.
 * Reads from standard input and loops through the buffer
 * and replaces `\n` with `\0`(end of string)
 */
void get_input_1(char **b){
    static char buffer[SIZE];
    char *r;
    buffer[0]='\0';

    r = fgets(buffer, SIZE, stdin);

    if (r == NULL){
        fprintf(stderr, "\tInput error\n");
        return;
    }

    int csize = 0;
    for (int i = 0; i < SIZE; i++){
        if (buffer[i] == '\n'){
            buffer[i] = '\0';
            csize = i;
            break;
        }
    }
    *b = (char *) malloc(sizeof(char) * csize);
    strcpy(*b, buffer);
}

/*
 * Loop using the s1_get_input() function.
 */
void solution_1(){
    int line = 0;
    char **texts = (char **) malloc (sizeof(char*) * MAX_LINES);

    while (line < MAX_LINES){
        printf("\tName #%d: ",line + 1);
        get_input_1(&(*(texts + line)));
        line++;
    }
    for (int i = 0; i < MAX_LINES; i++){
        printf("\tName: %s\n", (*(texts + i)));
        free(texts[i]);
    }
    free(texts);
}

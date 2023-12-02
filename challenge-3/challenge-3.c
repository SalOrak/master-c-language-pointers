#include <stdlib.h>


#include "challenge-3.h"

enum cmds {
    LIST = 1,
    ADD = 2,
    DELETE = 3,
    SAVE = 4,
    OPEN = 5,
    QUIT = 6,
} cmds;

/**
 * Input function. 
 * Reads and parses a string from the standard input (stdin).
 * Replaces last \n for \0 to NULL terminate string.
 */
void get_string_input(char **b){
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

/**
 * 
 */
void solution_1(){
    printf("Solution 1\n");

    char *data;
    char *res = "";

    char *cmd;

    do{
        printf("Enter command: ");
        get_string_input(&cmd);
        switch (atoi(cmd)) {
            case ADD:
                res = "ADD";
                get_data("NAME", &data);
                print_data("NAME", data);
                get_data("RELATIONSHIP", &data);
                print_data("RELATIONSHIP", data);
                break;
            case DELETE:
                res = "DELETE";
                break;
            case LIST:
                res = "LIST";
                break;
            case SAVE:
                res = "SAVE";
                break;
            case OPEN:
                res = "OPEN";
                break;
            case QUIT:
                res = "QUIT";
                break;
            default :
                res = "ERROR";
                break;
        }
        printf("You have selected command--> %s \n", res);
    }while(atoi(cmd) != QUIT);

    printf("Thank you for coming by :)");
}

void get_data(char *name, char **data){
    printf("Introduce %s: ", name);
    get_string_input(data);
}

void print_data(char *name, char *data){
    printf("The data for %s is %s\n", name, data);
}

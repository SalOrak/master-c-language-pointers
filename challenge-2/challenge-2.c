#include "challenge-2.h"

#include <stdio.h>
#include <stdlib.h>


void s1_SaveRecord(){
    struct person *p = (struct person *) malloc(sizeof(struct person) * 1);

    if (p == NULL) {
        fprintf(stderr, "\tError allocating memory for person structure \n");
        exit(1);
    }

    printf("\tCorrectly allocated person\n");
    printf("\tEnter the name: ");
    scanf("%s",p->name);
    printf("\tEnter the age: ");
    scanf("%d",&p->age);

    FILE *fp = fopen( FILENAME, "w");
    if (fp == NULL){
        fprintf(stderr, "\tError opening file struct.data\n");
        exit(1);
    }
    fwrite(p, sizeof(struct person), 1, fp);
    
    fclose(fp);

    free(p);
}

void s1_ReadRecord(){

    struct person *p = (struct person *) malloc(sizeof(struct person) * 1);

    if (p == NULL) {
        fprintf(stderr, "\tError allocating memory for person structure \n");
        exit(1);
    }

    FILE *fp = fopen( FILENAME, "r");
    if (fp == NULL){
        fprintf(stderr, "\tError opening file %s\n", FILENAME);
        exit(1);
    }

    fread(p, sizeof(struct person), 1, fp);
    fclose(fp);

    printf("\tPerson name: %s\n", p->name);
    printf("\tPerson age: %d\n", p->age);
    free(p);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct SET_ELEMENT {
    int start;
    int end;
    struct SET_ELEMENT *next;
} SET_ELEMENT;

typedef struct SET {
    SET_ELEMENT *root;        
} SET;

void createSet(SET *S){
    SET_ELEMENT *e = malloc(sizeof(SET_ELEMENT));
    e->next = null;
    S->root = e;
}

void addElement(int s, int e, SET *S) {
    SET_ELEMENT *temp = malloc(sizeof(SET_ELEMENT));
    temp->start = s;
    temp->end = e;
    temp->next = NULL;
    SET_ELEMENT *search = S->root;
    while(search->next != NULL) 
        search = search->next;
    search->next = temp;
}

int orderOfSet(SET *S) {
    int order;
    SET_ELEMENT *search = S->root;
    if(S->root == NULL) return 0;
    while(search->next != NULL) {
        order++;
        search = search->next;
    }
    return order;
}




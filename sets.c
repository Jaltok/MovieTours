#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "movieJobs.h"

void addElement(int s, int e, SET *S) {
    SET_ELEMENT *temp = malloc(sizeof(SET_ELEMENT));
    temp->start = s;
    temp->end = e;
    temp->next = NULL;
    if(S->root == NULL)
        S->root = temp;
    else {
        SET_ELEMENT *search = S->root;
        while(search->next != NULL) 
            search = search->next;
        search->next = temp;
    }
}

int orderOf(SET *S) {
    int order = 1;
   
    if(S->root == NULL) 
        return 0;
    
    SET_ELEMENT *search = S->root;
    while(search->next != NULL) {
        order++;
        search = search->next;
    }
    return order;
}

SET Union(SET *X, SET *Y) {
    SET T;
    createSet(&T);
    SET_ELEMENT *current;
    if(X->root != NULL) {
        current = X->root;
	addElement(current->start, current->end, &T);
        while(current->next != NULL) {
	    current = current->next;
            addElement(current->start, current->end, &T);
        }
    }
	
    if(Y->root != NULL) {
        current = Y->root;
        addElement(current->start, current->end, &T);
        while(current->next != NULL) {
            current = current->next;
            addElement(current->start, current->end, &T);
        }

    }

    return T;
}



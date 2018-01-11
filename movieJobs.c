#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "movieJobs.h"

typedef struct setList {
    SET *payload;
    struct setList *next;
} setList;

void powerSets(SET *S, int n) {
    setList *T, *root, *current, *last;
    T = malloc(sizeof(setList));
    SET *E = malloc(sizeof(SET));
    for(int i = 0; i < n; i++) {
        E->start = S[i]->start;
        E->end = S[i]->end;
   
        if(i == 0) {
             T->payload = temp;
	     T->next = NULL;
             root = T;
             last = root;
        } 
	else {
            current = root;
	    setList *V = malloc(sizeof(setList));
            while(current->next != NULL) {
		V->payload = Union(current->payload, E);
                current = current->next;
	    } 
	}
    }    

}


int main(void) {
    int n; 
    scanf("%d", &n);
    //create an array of potential jobs
    SET *I = malloc(sizeof(SET));
    
    //createSet(I);
    int s, e;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &s, &e);
	addElement(s, e, I);        
    }
    printf("Finished adding jobs\n");
    //create subsets
    

    return 0;
}

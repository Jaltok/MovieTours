#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "movieJobs.h"

SET powerSets(SET *S, int n) {
    int o = orderOf(S);
    SET T[2^n];
    for(int i = 0; i < o; i++) {
        SET *V;
        createSet(V);
        for(    	
    } 
}


int main(void) {
    int n; 
    scanf("%d", &n);
    //create an array of potential jobs
    SET *I;
    createSet(I);
    int s, e;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &s, &e);
	addElement(s, e, I);        
    }
    printf("Finished adding jobs\n");
    //create subsets
    

    return 0;
}

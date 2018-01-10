#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main(void) {

    scanf("%d", &n);
    //create an array of potential jobs
    set jobs[n];
    int s, e;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &s, &e);
        jobs[i].start = s;
        jobs[i].end = e;
    }

    set jobsMax[n];
    //create a subset 
    
}

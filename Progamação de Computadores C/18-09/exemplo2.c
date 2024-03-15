#include <stdio.h>
#include <stdlib.h>

void main(){
    int *p, *q;

    p = (int*) malloc (5 * sizeof(int));
    q = (int*) calloc(5, sizeof(int));
    p = (int*) realloc(p, 10*sizeof(int));
    /*printf("%d\n", p);
    printf("%d\n", q);*/
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", q[i]);
    }
    
    free(p);
    free(q);
    

}
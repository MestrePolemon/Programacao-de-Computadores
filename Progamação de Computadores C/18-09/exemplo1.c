#include <stdio.h>
#include <stdlib.h>

void main(){
    int x;
    float t = 2.1;

    x = (int)t;
    
    int *p, *pp, i;
    p = (int *)  malloc(5 * sizeof(int));
    pp = p;

    printf("%d\n", p);
    
    *pp = 12;
    pp++;
    *pp = 13;
    pp++;
    *pp = 22;
    
    

    for ( i = 0; i < 5; i++)
    {
        printf(" %d | ", p[i]);
        printf("%d\n ", &p[i]);

    }
    
    free(p);

    for ( i = 0; i < 5; i++)
    {
        printf(" %d | ", p[i]);
        printf(" %d\n ", &p[i]);
    }
    free(pp);
}
#include <stdio.h>
#include <stdlib.h>


#define TAMANHO 4

void main()
{
    int **p, i, j;

    p = (int **)malloc(TAMANHO * sizeof(int *));
    printf("End **p = %d\n", &p);
    printf("aponta **p = %d\n", p);

    for (i = 0; i < TAMANHO; i++)
    {
        p[i] = (int *)malloc(TAMANHO * sizeof(int));
        printf("End *p[i] = %d\n", &p[i]);
    }
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            printf("%d |", p[i][j]);
        }
    }
    for (i = 0; i < TAMANHO; i++)
    {
        free(p[i]);
    }
    free(p);
}
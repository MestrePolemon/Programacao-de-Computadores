#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(){
    int aux, i, j, vetor[10] = {5, 3, 2, 4, 7, 1, 0, 6, 9, 8};

    for (i = 1; i < n; i++)
    {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > aux)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }

    for (i = 0; i < n; i++)
    {
        printf("valor na Posicao %d = %d\n", i, vetor[i]);
    }

    return 0;
}

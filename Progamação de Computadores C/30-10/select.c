#include <stdio.h>
#include <stdlib.h>

int main() {
    int aux, i, j, min, n, vet[];

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    vet = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (vet[j] < vet[min])
            {
                min = j;
            }
        }
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }

    for (i = 0; i < n; i++)
    {
        printf("valor na Posicao %d = %d\n", i, vet[i]);
    }

    return 0;
}

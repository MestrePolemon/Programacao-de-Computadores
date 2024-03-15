#include <stdlib.h>      
#include <stdio.h>

void merge(int *vetor, int inicio, int fim){
    int i, j, k, meio, *vetorTemp;
    
    if(inicio == fim){
        return;
    }
    meio = (inicio + fim) / 2;

    merge(vetor, inicio, meio);
    merge(vetor, meio + 1, fim);

    i = inicio;
    j = meio + 1;
    k = 0;

    vetorTemp = (int *) malloc(sizeof(int) * (fim - inicio + 1));

    while(i < meio + 1 || j < fim + 1){
        if(i == meio + 1){
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else if(j == fim + 1){
            vetorTemp[k] = vetor[i];
            i++;
            k++;
        }
        else if(vetor[i] < vetor[j]){
            vetorTemp[k] = vetor[i];
            i++;
            k++;
        }
        else{
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
    }
    for(i = inicio; i <= fim; i++){
        vetor[i] = vetorTemp[i - inicio];
    }
    free(vetorTemp); 
    
}

void main(){
    int vetor[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}, i;

    merge(vetor, 0, 9);

    for(i = 0; i < 10; i++){
        printf("posicao %d: %d\n ", i, vetor[i]);
    }


}
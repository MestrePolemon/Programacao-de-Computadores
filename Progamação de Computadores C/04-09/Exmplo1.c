#include <stdio.h>

void escreveVetor(float *v, int tamanho){
    int i;
    

    for ( i = 0; i < tamanho; i++)
    {
        printf("End = %d |", (v + i));
        printf(" Valor = %f\n", *(v + i));
    }
    
}

void  main(){
    float vetor[] = {1, 2, 3, 4, 5};
    int i, tamanho;

    /*printf("%d\n", &vetor[0]);
    printf("%d\n", vetor);
    printf("%d\n", vetor[0]);
    printf("%d\n", *vetor);*/

    for ( i = 0; i < 5; i++)
    {
        printf("End = %f\n", &vetor[i]);
        printf("Valor = %f\n", vetor[i]);
    }

    printf("\n");
    printf("Tamanho que você quer: ");
    scanf("%d", &tamanho);

    escreveVetor(vetor, tamanho);
    
    
}
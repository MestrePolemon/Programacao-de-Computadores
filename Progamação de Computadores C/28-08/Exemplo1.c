//Calculo de ponteiros

#include <stdio.h>

void main(){
    
    int vetor[5] = {10, 20, 30, 40, 50};
    int *p1 = &vetor[0], *p2 = &vetor[4];
    int diferenca = p2 - p1;

    printf("End %d\n", p1);
    printf("End %d\n", p2);
    printf("Diferenca %d\n", diferenca);

   printf("End %d\n", p1);
   printf("valor %d\n", *p1);
   p1 += 3;
   printf("End %d\n", p1);
   printf("valor %d\n", *p1);
   
};
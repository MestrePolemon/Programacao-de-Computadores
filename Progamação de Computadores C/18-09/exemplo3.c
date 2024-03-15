#include <stdio.h>
#include <stdlib.h>

void main(){
    int resultado, soma = 0, n, i;
    int *valores;

    printf("Digite número desejado: ");
    scanf("%d", &n);

    valores = (int*) malloc(n * sizeof(int));

    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }
    
    resultado = soma/n;
    printf("Média %d\n", resultado);
    for ( i = 0; i < n; i++)
    {
        if (valores[i] < resultado)
        {
            printf("Valor %d abaixo da média\n", valores[i]);       
        }else{
            printf("Valor %d acima da média\n", valores[i]);
        }
        
    }

    free(valores);
    
    
}
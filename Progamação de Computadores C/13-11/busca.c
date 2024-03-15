#include <stdio.h>

int buscaBinaria(int *lista, int inicio, int fim, int chave) {
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // meio recebe 0 + (9 - 0) divido por 2

        if (lista[meio] == chave) {
            return meio;
        }
        else 
            if (lista[meio] > chave) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    return -1;
}
int buscaSequencial(int *lista, int chave, int tamanho)
{
    int i;
    for ( i = 0; i < tamanho; i++){
        if( lista[i] == chave){
            return i;
        }
    }
    return -1;
}

int main()
{
    int numeros[] = {2, 4, 6, 8, 10, 12, 14,16,18,20}, buscado, resultado;

    printf("Digite o numero para ser buscado : ");
    scanf("%d", &buscado);

    //resultado = buscaSequencial(numeros,buscado,10);
    resultado = buscaBinaria(numeros, 0, 9, buscado);

    if( resultado != -1 ){
    printf("O numero %d esta no indice %d", buscado, resultado);
}
else{
    printf("Elemento nao encontrado");
}
}
#include <stdio.h>

void main(){
    int valor;
    int *ponteiro = NULL;
    int *teste;

    if(!ponteiro){
        printf("1- Ponteiro Invalido - impoossivel usar");
    }else{
        printf("1- Ponteiro valido - possivel usar");
    }

    ponteiro = &valor;
    teste = ponteiro;

    if(!ponteiro){
        printf("2- Ponteiro Invalido - impoossivel usar");
    }else{
        printf("2- Ponteiro valido - possivel usar");
    }
}
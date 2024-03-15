#include <stdio.h>

int fatorialParcial(int num, int parcial){
    if(num == 1){
        return parcial;
    }else{
        fatorialParcial ((num - 1), (parcial * num));
    }
}

int fatorialCauda(int numero){

    return fatorialParcial(numero, 1);
}

void fatorialRef(int *n){
    int temp, base = 1;

    if (*n > 1)
    {
        temp = *n - 1;
        fatorialRef(&temp);
        base = *n * temp;
    }
    *n = base;

}

int fatorialValor ( int n){
    if(n < 2){
        return 1;
    }else{
        return n * fatorialValor(n - 1);
    }
}

void main(){
    int numero = 5, resultado, x = 5;

    resultado = fatorialValor(numero);
    printf("Fatorial valor = %d\n", resultado);

    fatorialRef(&x);
    printf("Fatorial referencia = %d\n", x);

    resultado = fatorialCauda(numero);
    printf("Fatorial cauda = %d", resultado);
}
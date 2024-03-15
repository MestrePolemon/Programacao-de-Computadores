#include <stdio.h>

int fibonacciCauda(int num, int a, int b){
    if (num == 0)
    {
        return a;
    }else{
        return fibonacciCauda(num - 1, b, a + b);
    }
    
}

int fibonacci(int num){
    if (num < 2)
    {
        return num;
    }else{
        return fibonacci(num - 1 ) + fibonacci(num - 2);
    }
    
}

void main(){
    int numero = 1000, resultado;

    resultado = fibonacciCauda(numero, 0, 1);
    printf("Fibo = %d", resultado);
}
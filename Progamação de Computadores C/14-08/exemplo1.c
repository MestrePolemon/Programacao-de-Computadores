#include <stdlib.h>

int main(){
    int a = 3;
    int b = 4;
    int provisorio = 0;

    provisorio = a;
    a = b;
    b = provisorio;

    printf("a = %d \nb = %d", a, b);
}
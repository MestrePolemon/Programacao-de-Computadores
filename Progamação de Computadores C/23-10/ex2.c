#include <stdio.h>

int main(){
    FILE *arquivoBin;
    int valor[5] = {1, 2, 3, 4, 5};

    arquivoBin = fopen("arquivo.bin", "rb");

    //fwrite(valor, sizeof(int), 5, arquivoBin);
    fread(valor, sizeof(int), 5, arquivoBin);

    for(int i = 0; i < 5; i++){
        printf("%d\n", valor[i]);
    }

    fclose(arquivoBin);
}
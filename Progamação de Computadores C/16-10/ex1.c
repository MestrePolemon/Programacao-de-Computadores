#include <stdio.h>

void main()
{
    int intNumero = 30, intNumLeitura;
    float floatNumero = 67.7878;
    char str[] = "Não sei";
    FILE *arquivo;

    arquivo = fopen("teste.txt", "w+"); 

    if( arquivo == NULL){
        printf("Problema ao abrir o arquivo");
        return -1;
    }

    /*fprintf(arquivo, "Número = %d\n", intNumero);
    fprintf(arquivo, "Float = %f\n", floatNumero);
    fprintf(arquivo, "String = %s\n", str);*/
    
    fscanf(arquivo, "Int = %d\n", &intNumLeitura);

    if(fclose(arquivo) == 0){
        printf("Arquivo fechado com sucesso");
    }else{
        printf("Erro ao fechar arquivo");
    };
}
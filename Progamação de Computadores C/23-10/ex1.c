#include <stdio.h>

int main()
{
    FILE *arquivo;
    char *linha = "Oi Eduardo, tudo bem?";
    int caracter;

    arquivo = fopen("teste.txt", "r");
    if( arquivo == NULL){
        printf("Problema ao abrir o arquivo");
        return 1;
    }

   while ( ( caracter = fgetc(arquivo)) != EOF ){
        putchar(caracter);
        fseek(arquivo, 1, SEEK_CUR);
    };
    
    rewind(arquivo);
    printf("\n");
    
    while ( ( caracter = fgetc(arquivo)) != EOF ){
        putchar(caracter);
    };

    /*
    if(fputs(linha, arquivo) != EOF){
        printf("Linha escrita corretamente");
    }
    else{
        printf("Linha não escrita corretamente");
    }

    if(fgets(linha, sizeof(linha), arquivo)!= NULL){
        printf("Lido do arquivo = %s", linha);
    }
    else{
        printf("Problema de leitura");
    }
    
    if(fputc(caracter, arquivo) != EOF){
        printf("Caracter escrito corretamente");
    }
    else {
        printf("Caracter não escrito corretamente");
    }
    
    // while ( ( caracter = fgetc(arquivo)) != EOF ){
    // putchar(caracter); */
    
    if(fclose (arquivo) == 0){
        printf("\nArquivo fechado corretamente");
        return 0;
    }
    else{
        printf("\nArquivo não fechado corretamente");
        return 1;
    }
}
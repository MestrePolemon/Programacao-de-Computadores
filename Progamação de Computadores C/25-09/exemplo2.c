#include <stdio.h>
#include <stdlib.h>

typedef struct teste
{
    int RGM, idade, nota;
} Alunos;

void main(){
   
    Alunos *aluno;

    aluno = (aluno *) malloc (5 * sizeof(Alunos));
    aluno->idade = 10;
    aluno->nota = 100;
    aluno->RGM = 1234567;
}

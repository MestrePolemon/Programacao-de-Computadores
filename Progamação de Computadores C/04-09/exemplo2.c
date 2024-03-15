#include <stdio.h>

struct Pessoa
{
    char nome[50];    
    int idade;
};

void main()
{
    struct Pessoa valorPessoa;
    struct Pessoa *ponteiroPessoa;
    
    valorPessoa.idade;
    valorPessoa.nome;

    ponteiroPessoa = &valorPessoa;
    
    ponteiroPessoa -> idade;
    ponteiroPessoa -> nome;

}
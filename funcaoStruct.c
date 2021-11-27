#include <stdio.h>

typedef struct
{
    char nome[30];
    char telefone[20];
} Pessoa;

//funções declaradas antes do main
void imprimePessoa(Pessoa p)
{
    puts("..............Imprimindo dados da Struct..............");
    printf("\nNome:  %s", p.nome);
    printf("\nTelefone: %s", p.telefone);
}

Pessoa cadastraPessoa(char nome[], char telefone[])
{
    Pessoa pessoa;
    strcpy(pessoa.nome, nome);
    strcpy(pessoa.telefone, telefone);
    return pessoa;
}
main()
{
    Pessoa pessoa, pes2; //variável pessoa do Tipo Pessoa

    //atribuindo valores para a struct
    strcpy(pessoa.nome, "Sara Witchment");
    strcpy(pessoa.telefone, "(15)9999-9999");

    //chamada da função
    imprimePessoa(pessoa);

    //chamada da função para cadastrar pessoa
    pes2 = cadastraPessoa("Joao", "(15) 9999-99999");
    imprimePessoa(pes2);
}

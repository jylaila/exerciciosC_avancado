#include <stdio.h>
#include <string.h>

main()
{
    char nome[30];
    char sobrenome[30];
    char *retorno;

    puts("Digite o nome completo");
    fflush(stdin);
    gets(nome);

    puts("Digite o sobrenome procurado");
    fflush(stdin);
    gets(sobrenome);

    retorno = strstr(nome, sobrenome);

    printf("Sobrenome encontrado: %s", retorno);
}
#include <stdio.h>

int main()
{

    //Exemplo criação de arquivo
    //variavel para arquivo - PONTEIRO
    FILE *pont;

    //abrindo o arquivo
    //fopen(nomearquivo, tipodeleituragravacao)
    pont = fopen("arquivo.txt", "w");

    //tratando os erros
    if (pont == NULL)
    {
        puts("Erro ao carregar o arquivo");
    }
    else
    {
        //comandos para inserção, leitura
        puts("Arquivo lido com sucesso");
    }

    //fechar
    fclose(pont);
}
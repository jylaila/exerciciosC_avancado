#include <stdio.h>

int main()
{

    //fputs(string, ponteiro)

    FILE *pont;
    char palavra[20];
    //int idade;

    pont = fopen("escrita2.txt", "a");

    if (pont == NULL)
    {
        puts("Erro ao abrir o arquivo!");
        exit(1);
    }

    puts("Digite a palavra desejada: ");
    scanf("%s", palavra);

    //fprintf(ponteiro, tipodedado, variavel)
    // fprintf(pont,"%s %i \n",palavra, idade);
    fprintf(pont, "%s", palavra);
    fprintf(pont, "%s", "\n");

    fclose(pont);
    puts("Dados gravados com sucesso!");
}
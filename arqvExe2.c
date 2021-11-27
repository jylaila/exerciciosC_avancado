#include <stdio.h>
#include <stdlib.h>

int main()
{

    //escrever no arquivo
    FILE *pont;
    char palavra[30];

    //a = append
    pont = fopen("palavra.txt", "a");

    if (pont == NULL)
    {
        puts("Impossivel abrir o arquivo");
        exit(1);
    }

    puts("Digite uma palavra");
    scanf("%s", palavra);

    //escrever a palavra no arquivo
    //fputs(string, ponteiroparaoarquivo)
    //fprintf(variavelponteiro,tipododado, string)
    fprintf(pont, "%s", palavra);
    fprintf(pont, "%s", "\n");

    fclose(pont);

    puts("Arquivo gravado com sucesso!!!!");
}
#include <stdio.h>

int main()
{

    FILE *pont;
    char palavra[21];

    pont = fopen("escrita.txt", "r");

    // fgets(string a ser lida, tamanho, entrada)
    // fgets(variavel, tamanho, stdin)
    // fgets(variavel, tamanho, pont)
    //fscanf(pont, "%d %d %s", variavel1, variavel2, variavel3)

    while (fgets(palavra, 20, pont) != NULL)
        printf("%s", palavra);

    fclose(pont);
}
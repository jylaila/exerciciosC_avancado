#include <stdio.h>

int main()
{

    FILE *pont;
    char frase[31];

    pont = fopen("palavra.txt", "r");

    //fgets(string, qtdcaracteres, ponteiro)
    while (fgets(frase, 30, pont) != NULL)
        printf("%s", frase);

    fclose(pont);
}
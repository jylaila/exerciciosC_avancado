#include <stdio.h>

main()
{
    char nomes[5][100], busca[100];
    char end[] = "rua";
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
    }
    printf("Nome para localizar: ");
    scanf("%s", busca);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; (nomes[i][j] != '\0') && (nomes[i][j] == busca[j]); j++)
            ;
        if ((nomes[i][j] == '\0') && (busca[j] == '\0'))
            printf("Nome encontrado na posicao %d\n", i);
    }
}
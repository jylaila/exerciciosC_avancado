#include <stdio.h>

main()
{

    int numero[10];
    int vetor[5] = {1, 2, 3, 4, 5};

    vetor[2] = 7;

    for (int x = 0; x < 5; x++)
    {
        vetor[x] = 0;
    }

    int num[5][3], soma;
    int x[] = {1, 2, 3};

    int num1[3][2] = {{1, 3}, {2, 5}, {3, 7}};

    num1[0][1] = 4;
    soma = 0;
    for (int c = 0; c < 2; c++)
    {
        soma = soma + num1[1][c];
    }
    printf("Soma %d", soma);
}
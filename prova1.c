#include <stdio.h>

int main()
{

    int matriz[3][3] = {3, 0, 6, 1, 6, 6, 3, 0, 8};
    int matrizInvertida[3][3];

    puts("................Matriz Principal................");
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", matriz[l][c]);
            matrizInvertida[c][l] = matriz[l][c];
        }
        printf("\n");
    }

    puts("................Matriz Invertida................");
    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%d ", matrizInvertida[l][c]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#define LIN 4
#define COL 4
int main()
{
    int m[LIN][COL];
    int l, c;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    //Recebe a matriz
    for (l = 0; l < LIN; l++)
    {
        for (c = 0; c < COL; c++)
        {
            scanf("%i", m[l][c]);
        }
    }

    for (l = 0; l < LIN; l++)
    {
        // somaDiagonalPrincipal =  somaDiagonalPrincipal + m[l][l];
        somaDiagonalPrincipal += m[l][l];
    }

    for (l = 0; l < LIN; l++)
    {
        somaDiagonalSecundaria += m[l][COL - 1 - l];
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado();

void main()
{
    int a;
    int Lado[6] = {0, 0, 0, 0, 0, 0};
    float porcentagem[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i <= 100000; i++)
    {

        a = Dado();

        for (int j = 1; j <= 6; j++)
        {
            if (a == j)
                Lado[j]++;
        }
    }
    for (int k = 1; k <= 6; k++)
    {
        printf("\nLado[%d]: %d vezes, Porcentagem: %.2f", k, Lado[k], porcentagem[k] / 1000000);
    }
}

int Dado()
{
    srand((unsigned)time(NULL));
    int x = 1 + (rand() % 6);
    printf("\n%d", x);
    return x;
}
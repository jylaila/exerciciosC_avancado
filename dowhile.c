#include <stdio.h>

int main()
{

    int x = 1;

    do
    {
        printf("\n %d", x);
        x++;           //incremento
    } while (x <= 20); //teste lógico no final da estrutura, executa pelo menos 1x

    return 0;
}
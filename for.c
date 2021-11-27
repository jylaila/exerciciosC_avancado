#include <stdio.h>

int main()
{
    //tipo nome[qtdeElementos]={atribuição}
    int valores[5] = {3, 5, 7, 8, 9};
    int valor[] = {1, 2, 3};

    //for(inicialização;condicao; incremento/decremento)
    int x;

    for (x = 20; x >= 1; x--)
    {
        printf("\n %d", x);
    }

    for (x = 0; x <= 2; x++)
    {
        printf("\nvalor[%d] = %d", x, valor[x]);
    }

    return 0;
}
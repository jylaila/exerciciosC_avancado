#include <stdio.h>

int main()
{
    char resposta;

    int b = 10;
    void *x = NULL;

    resposta = verificaNulo(x);
    if (resposta == '0')
        puts("Nulo");
    else
        puts("Nao Nulo");

    resposta = verificaPositivo(10);

    if (resposta == 'P')
    {
        puts("Positivo");
    }
    else if (resposta == '0')
    {
        puts("Neutro");
    }
    else
        puts("Negativo");
}

char verificaPositivo(int x)
{
    if (x > 0)
    {
        return 'P';
    }
    else if (x == 0)
    {
        return '0';
    }
    else
    {
        return 'N';
    }
}

char verificaNulo(int *x)
{
    if (x == NULL)
        return '0';
    else
        return '1';
}
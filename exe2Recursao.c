#include <stdio.h>

int main()
{

    int n;

    puts("Digite um numero: ");
    scanf("%d", &n);

    printf("%d", conta_Digitos(n));
}

int conta_Digitos(int num)
{

    static int cont = 0;

    if (num != 0)
    {
        cont += 1;
        conta_Digitos(num / 10);
    }
    return cont;
}
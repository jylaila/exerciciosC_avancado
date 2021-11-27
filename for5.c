#include <stdio.h>
#include <locale.h>

int main()
{
    int x, a, b, contapar, contaimpar;

    setlocale(LC_ALL, "");

    contapar = 0; //variaveis para armazenar a qtde de pares e �mpares
    contaimpar = 0;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        x = a;
        a = b;
        b = x;
    }

    for (x = a; x <= b; x++)
        if (x % 2 == 0)
            contapar = contapar + 1; //acumulador
        else
            contaimpar = contaimpar + 1; //acumulador

    printf("Quantidade de Pares %d: ", contapar);
    printf("Quantidade de �mpares %d: ", contaimpar);

    return 0;
}


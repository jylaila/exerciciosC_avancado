#include <stdio.h>
#include <locale.h>

int main()
{
    float n, soma;
    setlocale(LC_ALL, "");
    soma = 0; //acumulará a soma dos valores
    n = 1;    //garantir que entre no laço de repetição

    do
    {
        printf("Digite um número: \n");
        scanf("%f", &n);
        if (n > 0)
            soma = soma + n;
    } while (n > 0);

        printf("A soma é %.2f", soma);
    return 0;
}

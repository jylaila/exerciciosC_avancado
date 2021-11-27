#include <stdio.h>
#include <locale.h>

int main()
{
    float n, soma;
    setlocale(LC_ALL, "");
    soma = 0; //acumular� a soma dos valores
    n = 1;    //garantir que entre no la�o de repeti��o

    while (n > 0)
    {
        printf("Digite um n�mero: \n");
        scanf("%f", &n);
        if (n > 0)
            soma = soma + n;
    }

    printf("A soma � %.2f", soma);
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    float n, soma;
    setlocale(LC_ALL, "");
    soma = 0; //acumular� a soma dos valores
    n = 1;    //garantir que entre no la�o de repeti��o

    do
    {
        printf("Digite um n�mero: \n");
        scanf("%f", &n);
        if (n > 0)
            soma = soma + n;
    } while (n > 0);

        printf("A soma � %.2f", soma);
    return 0;
}

#include <stdio.h>
#include <locale.h>

int main()
{

    char resp;
    float a, b;

    setlocale(LC_ALL, "");
    do
    {
        printf("Digite dois n�meros: \n");
        scanf("%f %f", &a, &b);
        printf("\nSoma %.2f: ", (a + b));

        printf("\nDeseja continuar? S|N?\n");
        scanf(" %c", &resp); //deixar espa�o antes do %c para limpar o \n anterior
    } while (resp == 's' || resp == 'S');

    return 0;
}
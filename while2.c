#include <stdio.h>
#include<locale.h>

int main()
{

    char resp = 'S';
    float a, b;

    setlocale(LC_ALL, "");

    while (resp == 's' || resp =='S')
    {
        printf("Digite dois números: \n");
        scanf("%f %f", &a, &b);
        printf("\nSoma %.2f: ", (a + b));

        printf("\nDeseja continuar? S|N?\n ");
        scanf(" %c", &resp);//deixar espa?o antes do %c para limpar o \n anterior
    }
    return 0;
}
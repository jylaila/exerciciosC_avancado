#include <stdio.h>

int main()
{

    int i, numTermos, n1, n2, n3;

    printf("Digite o numero de termos: ");
    scanf("%d", &numTermos);

    n1 = 2;
    n2 = 7;
    n3 = 3;

    printf("%d ", n1);
    printf("%d ", n2);
    printf("%d ", n3);

    i = 4; //controlar numero de termos

    while (i != numTermos)
    {
        n1 = n1 * 2;
        printf("%d ", n1);
        i = i + 1; //incremento o controlador
        if (i != numTermos)
        {
            n2 = n2 * 3;
            printf("%d ", n2);
            i = i + 1;
        }
        if (i != numTermos)
        {
            n3 = n3 * 4;
            printf("%d ", n3);
            i = i + 1;
        }
    }

    return 0;
}
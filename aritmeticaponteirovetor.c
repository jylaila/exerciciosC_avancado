#include <stdio.h>
#define TAM 5

int main(void)
{
    int valor[TAM] = {10, 20, 30, 40, 50};
    int i;
    int *ptr;

    ptr = valor;

    for (i = 0; i < TAM; i++)
        printf("\n%i", *(ptr++));

    return 0;
}

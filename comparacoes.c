#include <stdio.h>

/* Operadores permitidos
 >= <= == != > <
 */

int main()
{
    int *p, *p1, x, y;

    p = &x;
    p1 = &y;

    if (p >= p1)
    {
        printf("Sao Iguais");
    }
    else
    {
        printf("Sao diferentes");
    }
}

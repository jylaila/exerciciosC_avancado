#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *v;

    v = (int *)malloc(10 * sizeof(int));
    //v - endereço 1º elemento do vetor
    carrega(v);
}

void carrega(int *v)
{
    v[0] = 1;
    v++;
}
#include <stdio.h>

int Soma(int a, int b);
void AlteraVetor(int *vetor, int elementos);

int main()
{

    int a = 10;
    int b = 20;

    //chamada de função e passagem de parâmetros por valor
    printf("%d\n", Soma(a, b));

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pt;

    pt = v;

    //chamada da função e a passagem de parâmetros por referência
    AlteraVetor(v, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("V[%i] = %i\n", i, *(pt + i)); //outra forma de percorrer o vetor
    }

    int var = 10;
    int *ptr = &var;
    alteraVariavel(ptr);
    printf("\n var: %d", var);
}

int Soma(int a, int b)
{
    a++;
    return a + b;
}

void AlteraVetor(int *vetor, int elementos)
{
    int i;
    if (vetor != NULL)
    {
        for (i = 0; i < elementos; i++)
        {
            *(vetor) = *(vetor) + 1; //incremento no elementos do vetor
            vetor++;                 //percorrer as posições
        }
    }
}

void alteraVariavel(int *a)
{
    *a = 10;
}
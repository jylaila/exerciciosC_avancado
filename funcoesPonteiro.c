#include <stdio.h>

int soma(int a, int b);
void AlterarVetor(int *vetor, int elementos);

int main()
{
    int a = 10;
    int b = 20;

    //passagem de parâmetros por valor
    printf("%d", soma(a, b));

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pt;

    pt = v; //armazenando o endereço da 1ª posicao do meu vetor &v[0]
    //passagem de parâmetros por referência
    AlterarVetor(pt, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("V[%i] = %i\n", i, *(pt + i));
    }
}

int soma(int a, int b)
{
    a = a + 1;
    return a + b;
}

void AlterarVetor(int *vetor, int elementos)
{
    int i;
    if (vetor != NULL)
    {
        for (i = 0; i < elementos; i++)
        {
            *(vetor) = *(vetor) + 1; //adiciono +1 ao valor do vetor
            vetor++;
        }
    }
}
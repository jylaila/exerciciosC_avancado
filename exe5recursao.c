#include <stdio.h>
int *inverte(int v[], int pinicio, int pfim);
int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 16, 17};
    int numElementos = sizeof(vetor) / sizeof(int);
    int *vetorinvertido = inverte(vetor, 0, numElementos - 1);

    for (int i = 0; i < numElementos; i++)
    {
        printf("%d ", vetorinvertido[i]);
    }
}

int *inverte(int v[], int pinicio, int pfim)
{
    int temp;

    if (pinicio >= pfim)
    {
        return (1);
    }
    temp = v[pinicio];
    v[pinicio] = v[pfim];
    v[pfim] = temp;

    inverte(v, pinicio + 1, pfim - 1);
    return v;
}
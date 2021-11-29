#include <stdio.h>
void bubbleSort(int *vet, int tam);

int main()
{
    int vetor[7] = {1, 7, 8, 9, 10, 2, 3};
    int tam = sizeof(vetor) / sizeof(int);

    bubbleSort(vetor, tam);

    printf("\n *** Dados ordenados: ***\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
}
void bubbleSort(int *vet, int tam)
{
    int aux, i, j;

    for (i = 0; i < tam - 1; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
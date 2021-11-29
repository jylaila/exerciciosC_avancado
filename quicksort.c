#include <stdio.h>
void quickSort(int *vet, int esq, int dir);

int main()
{
    int vetor[7] = {1, 7, 8, 9, 10, 2, 3};
    int tam = sizeof(vetor) / sizeof(int);

    quickSort(vetor, 0, tam - 1);

    printf("\n *** Dados ordenados: ***\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
}
void quickSort(int *vet, int esq, int dir)
{
    int pivo = esq, i, ch, j;
    for (i = esq + 1; i <= dir; i++)
    {
        j = i;
        if (vet[j] < vet[pivo])
        {
            ch = vet[j];
            while (j > pivo)
            {
                vet[j] = vet[j - 1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
    }
    if (pivo - 1 >= esq)
    {
        quickSort(vet, esq, pivo - 1);
    }
    if (pivo + 1 <= dir)
    {
        quickSort(vet, pivo + 1, dir);
    }
}
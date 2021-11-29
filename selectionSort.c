#include <stdio.h>
void selectionSort(int vet[], int n);
int main()
{

    int vetor[7] = {1, 7, 8, 9, 10, 2, 3};
    selectionSort(vetor, 7);
}

void selectionSort(int vet[], int n)
{
    int i, j, min, x;
    for (i = 1; i <= n - 1; i++)
    {
        min = i;
        for (j = i + 1; j <= n; j++)
        {
            if (vet[j] < vet[min])
                min = j;
        }
        x = vet[min];
        vet[min] = vet[i];
        vet[i] = x;
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d ", vet[i]);
    }
}
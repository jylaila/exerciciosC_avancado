#include <stdio.h>

void insertionSort(int array[], int n);

int main()
{
    int vetor[7] = {1, 7, 8, 9, 10, 2, 3};
    insertionSort(vetor, 7);
}
void insertionSort(int array[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", array[i]);
    }
}


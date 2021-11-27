#include <stdio.h>
#include <stdlib.h>

#define LIN 4
#define COL 6

int main()
{
    int *mat;
    int i, j;
    // aloca um vetor com todos os elementos da matriz
    mat = malloc(LIN * COL * sizeof(int));
    // percorre a matriz
    for (i = 0; i < LIN; i++)
        for (j = 0; j < COL; j++)
            mat[(i * COL) + j] = 0; // calcula a posição de cada elemento
    // libera a memória alocada para a matriz
    free(mat);
}

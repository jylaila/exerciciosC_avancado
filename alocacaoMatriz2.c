#include <stdlib.h>
#include <stdio.h>

#define LIN 4
#define COL 6

int main()
{

    int **mat;
    mat = (int **)malloc(LIN * sizeof(int *));

    for (int i = 0; i < LIN; i++)
    {
        mat[i] = (int *)malloc(COL * sizeof(int));
    }
    for (int l = 0; l < LIN; l++)
    {
        for (int c = 0; c < COL; c++)
        {
            mat[l][c] = 0;
        }
    }

    for (int i = 0; i < LIN; i++)
    {
        free(mat[i]); //libero a memória ocupada para as colunas
    }
    free(mat);
    mat = NULL;
}

char calcula(int x)
{
    return 'a';
}

long *calcula2(int x, int y)
{
    long *ptr;
    return ptr;
}
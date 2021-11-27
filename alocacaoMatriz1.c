#include <stdlib.h>
#include <stdio.h>

#define LIN 4
#define COL 6

int main()
{

    int *mat, i, j;

    mat = (int *)malloc(LIN * COL * sizeof(int)); //void
    //calloc
    //mat = calloc(LIN*COL, sizeof(int));

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat[(i * COL) + j] = 0;
        }
    }

    free(mat);
    mat = NULL;
}
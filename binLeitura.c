#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*fread(ptdados, tamtipo, numelementos, arq)*/

    FILE *arq;
    int i[5], x;


    arq = fopen("teste.dat", "rb");

    if (arq != NULL)
    {
        fread(i, sizeof(int), 5, arq);

        for(x=0; x<5; x++){
            printf("%d ", i[x]);
        }
    }
}


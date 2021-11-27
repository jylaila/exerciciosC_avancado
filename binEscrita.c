#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*fwrite(ptdados, tamtipo, numelementos, arq)*/
    FILE *arq;
    int i[5] = {1, 2, 3, 4, 5};

    arq = fopen("teste.dat", "wb");

    if (arq != NULL)
    {
        fwrite(i, sizeof(int), 5, arq);
    }
    fclose(arq);
}

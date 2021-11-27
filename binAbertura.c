#include <stdlib.h>
#include <stdio.h>

int main()
{

    /* fopen (char *nome, char *modo)*/
    FILE *arq;
    arq = fopen("exemplo.dat", "rb");  //rb, wb, ab

    if (arq == NULL)
    {   puts("Impossivel abrir o arquivo");
        exit(1);
    }

    fclose(arq);
}
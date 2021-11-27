#include <stdlib.h>

// malloc
int main()
{
    /*
void * malloc(size_t size);//função para alocação de memória
void free(void *ptr); // função para liberar a memória
*/

    int x = sizeof(int);
    int y = sizeof(float); //retorna um valor inteiro, com a qtde de bytes

    int *ptr = (int *)malloc(10 * sizeof(int));

    free(ptr);

    ptr = NULL;
}

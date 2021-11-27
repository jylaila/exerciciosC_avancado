#include<string.h>


int main()
{
    char animal1[] = "cachorro", animal2[] = "gato";
    int resultado;

    resultado = strcmp(animal1, animal2);
    printf("%d\n", resultado);

    return 0;
}
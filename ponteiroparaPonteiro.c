#include <stdio.h>

int main()
{

    int b = 10;
    int *ptr = &b;
    int **ptr2 = &ptr; //ponteiro para ponteiro

    printf("\nConteudo da variavel b = %i", b);
    printf("\nEndereco da variavel b = %i", &b);
    printf("\nConteudo do endereco ponteiro ptr = %i", *ptr);
    printf("\nValor do endereco ponteiro ptr = %i", ptr);
    printf("\nEndereco ponteiro ptr = %i", &ptr);
    printf("\nConteudo do endereco ponteiro ptr2 = %i", *ptr2);
    printf("\nValor do endereco ponteiro ptr2 = %i", ptr2);
    printf("\nEndereco ponteiro ptr2 = %i", &ptr2);
}
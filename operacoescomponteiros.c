#include <stdio.h>

//operacoes com ponteiros
//adicao e subtracao

int main()
{

    int a = 10;
    int *pt_a = &a;

    printf("Endereco de a = %d no ponteiro", pt_a);
    printf(", Endereco de a = %d", &a);

    pt_a++; //incrementando + 1
    printf("\nEndereco de + 1 a = %d", pt_a);
    pt_a = pt_a + 15; // 15*4bytes
    printf("\nEndereco de a + 15 = %d", pt_a);
    pt_a = pt_a - 3; // 3*4bytes
    printf("\nEndereco de a -3 = %d", pt_a);
}


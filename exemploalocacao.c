#include <stdio.h>
#include <stdlib.h>
//malloc, free, realloc, calloc

int main()
{

    float *v; //ponteiro que vai receber o endereço de memória alocado
    int qtd_elementos;

    puts("Digite a quantidade de elementos do vetor");
    scanf("%d", &qtd_elementos);

    //aloca espaço de memória para armazenar a qtde de elementos informada
    v = (float *)malloc(qtd_elementos * sizeof(float));
    //void * malloc(size_t size)//recebe a qtde de bytes e retorna
    //o endereço do inicio da área de memória alocada
    if (v == NULL)
    {
        puts("Memoria insuficiente");
        exit;
    }

    //Preenchendo o vetor
    for (int i = 0; i < qtd_elementos; i++)
    {
        printf("Digite o valor para a posicao %d do vetor ", i + 1);
        scanf("%f", &v[i]);
    }

    //percorrendo o vetor - imprimir o vetor
    for (int i = 0; i < qtd_elementos; i++)
    {
        printf("%.2f\n", v[i]);
    }

    //redimensionar o vetor
    puts("Digite a nova quantidade de elementos do vetor");
    scanf("%d", &qtd_elementos);
    //realloc
    //void * realloc (void *ptr, size_t newsize)
    v = (float *)realloc(v, qtd_elementos * sizeof(float));

    free(v);  //libero a memória reservada
    v = NULL; //retirar o end do ponteiro

    //calloc
    //void * calloc (size_t count, size_t eltsize)

#include <stdlib.h>

    float *x;
    //cria um vetor com 10 elementos do tipo float
    x = (float *)calloc(10, sizeof(float));
}
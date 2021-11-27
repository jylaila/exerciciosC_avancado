#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *v, tamanho;

    //preenche o vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho); //10

    //criar o vetor dinamicamente
    v = (int *)malloc(tamanho * sizeof(int)); //10*4

    if (!v)
    {
        printf("Impossivel alocar memoria. \n");
        exit;
    }
    else
    {
        printf("Memoria alocada com sucesso!");
    }
    //chamada para a função
    preencheVetor(v, tamanho);
    //imprimindo o vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", v[i]);
    }

    free(v);
    v = NULL;
}

void preencheVetor(int *vetor, int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("\nDigite o valor para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
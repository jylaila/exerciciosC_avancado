#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int vlBuscado, int nElementos);

int main()
{

    int numeros[] ={ 1, 2, 3, 4, 5, 6, 7, 8 };
    int valor = 15;

    if (buscaBinaria(numeros, valor, 8) == -1)
        puts("Nao achou");
    else
        puts("Achou!");
}

int buscaBinaria(int vetor[], int vlBuscado, int nElementos)
{
    //vetor[1,2,3,4,5,6]
    //     esq..... dir
    int esquerda, direita, meio;
    esquerda = 0;
    direita = nElementos - 1;

    while (esquerda <= direita)
    {
        meio = (esquerda + direita) / 2;
        if (vetor[meio] == vlBuscado)
            return meio;

        if (vetor[meio] < vlBuscado)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return -1;
}

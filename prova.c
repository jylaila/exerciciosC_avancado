#include <stdio.h>
#include <string.h>

#define TOTALUNO 10

typedef struct
{
    char nome[20];
    char sobrenome[20];
    char endereco[40];
    int idade[8];

} aluno;

aluno alunoFatec[TOTALUNO];

int main()
{
    strcpy(alunoFatec[0].nome, "Caio");

    strcpy(alunoFatec[0].sobrenome, "Fernandes");

    printf("Nome completo o Aluno 1 %s%s", alunoFatec[0].nome, alunoFatec[0].sobrenome);

    float altura, peso;

    altura = 1.95;
    peso = 60;

    if (altura < 1.20)
    {
        if (peso <= 60)
            printf("A");
        else if (peso > 60 && peso <= 90)
            printf("D");
        else
            printf("G");
    }
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso <= 60)
            printf("B");
        else if (peso > 60 && peso <= 90)
            printf("E");
        else
            printf("H");
    }
    else
    {
        if (peso <= 60)
            printf("C");
        else if (peso > 60 && peso <= 90)
            printf("F");
        else
            printf("I");
    }
}
#include <stdio.h>

void verificaPositivo(int num); //Exemplo1
char Positivo(int num);         //Exemplo2
char verificaNulo(int *x);

int main()
{
    int numero;

    verificaPositivo(0);

    char resposta;
    int b = 10;
    resposta = Positivo(b);

    if (resposta == 'P')
        puts("Positivo");
    else if (resposta == '0')
        puts("Neutro");
    else
        puts("Negativo");

    int *b = NULL;
    resposta = verificaNulo(b);

    numero = digiteNumero();
    resposta = verificaNulo(&numero);

    if (resposta == 0)
        puts("Nulo");
    else
        puts("Nao nulo");
}

//numero positivo > 0, 1,2,3, numero negativo < -1,-2, -3,  neutro = 0

void verificaPositivo(int num)
{
    if (num > 0)
        puts("Positivo");
    else if (num == 0)
        puts("Neutro");
    else
        puts("Negativo");
}

char Positivo(int num)
{
    if (num > 0)
        return 'P';
    else if (num == 0)
        return '0';
    else
        return 'N';
}

//NULL -> nenhum endereço de memória associado
char verificaNulo(int *x)
{
    if (x == NULL)
        return 0;
    else
        return 1;
}

int digiteNumero()
{
    int num;
    puts("Digite um numero: ");
    scanf("%f", &num);
    return num;
}
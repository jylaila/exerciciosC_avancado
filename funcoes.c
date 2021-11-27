#include <stdio.h>

//protótipos necessários quando a função é declarada após a função main

//prototipo para função sem retorno e sem parâmetro
void menu();
//protótipo da funcao com retorno e sem parâmetro
int respostaMenu();
float digiteNumero();
//protótipo da funcao sem retorno e com parâmetro
void soma(float num1, float num2);
//protótipo da funcao com retorno e com parâmetro
float subtrair(float num1, float num2);
float dividir(float num1, float num2);

int main()
{
    int opcao, a, b;
    float resultado;
    //chamada para função sem retorno e sem parâmetro
    menu();

    //chamada para funcao com retorno e sem parâmetro
    //o valor retornado pela função será armazenado na variável opcao
    opcao = respostaMenu();
    //o valor retornado pela função será armazenado na variável a
    a = digiteNumero();
    //o valor retornado pela função será armazenado na variável b
    b = digiteNumero();

    switch (opcao)
    {
    case 1:
        //chamada da funcao sem retorno e com parâmetro
        //os valores das váriaveis a e b serão passados para as variáveis de
        //entrada da função num1 e num2 de forma sequencial
        soma(a, b);
        break;

    case 2:
        //chamada da funcao com retorno e com parâmetro
        printf("Subtracao: %.2f", subtrair(a, b));
        break;

    case 3:
        //chamada da funcao com retorno e com parâmetro
        //retornando em variável ao invés de imprimir como no case 2
        resultado = dividir(a, b);
        printf("Divisao: %.2f", resultado);
        break;

    default:
        puts("Opcao Invalida....");
        break;
    }

    return 0;
}

//função sem retorno e sem parâmetro
void menu()
{
    puts("Digite a opcao desejada: ");
    puts("1 - Soma");
    puts("2 - Subtracao");
    puts("3 - Divisao");
}

//funcao com retorno e sem parâmetro
int respostaMenu()
{
    int resp;
    scanf("%d", &resp);
    return resp;
}

float digiteNumero()
{
    float num;
    puts("Digite um numero: ");
    scanf("%f", &num);
    return num;
}

//funcao sem retorno e com parâmetro
void soma(float num1, float num2)
{
    printf("Soma: %.2f", (num1 + num2));
}

//funcao com retorno e com parâmetro
float subtrair(float num1, float num2)
{
    return (num1 - num2);
}

float dividir(float num1, float num2)
{
    if (num2 <= 0)
    {
        puts("Impossivel dividir por zero...");
        return 0;
    }
    return num1 / num2;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    int qtde, a;
    float total;
    setlocale(LC_ALL, "");
    a = 0; //variável de controle para entrar no loop
    total = 0;
    while (a < 3)
    {
        printf("Digite a quantidade de itens vendidos: \n");
        scanf("%d", &qtde);
        total = total + qtde;
        a = a + 1;
    }
    total = total * 1.99;
    printf("Total Vendido R$ %.2f", total);
    return 0;
}
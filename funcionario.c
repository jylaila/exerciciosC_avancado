#include <stdio.h>

int main()
{

    int codigo, opcao;
    float salario;

    do
    {
        puts("Digite o codigo");
        scanf("%d", &codigo);

        puts("Digite o salario");
        scanf("%f", &salario);

        switch (codigo)
        {
        case 1:
            puts("Cargo Escriturario");
            printf("Valor do aumento %.2f", salario * 0.50);
            printf("Valor atualizado %.2f", salario * 1.50);
            break;
        case 2:
            puts("Cargo Secretario");
            printf("Valor do aumento %.2f", salario * 0.35);
            printf("Valor atualizado %.2f", salario * 1.35);
            break;
        case 3:
            puts("Cargo Caixa");
            printf("Valor do aumento %.2f", salario * 0.20);
            printf("Valor atualizado %.2f", salario * 1.20);
            break;
        case 4:
            puts("Diretor");
            printf("Nao tem aumento");
            printf("Valor atualizado %.2f", salario);
            break;

        default:
            break;
        }

    } while (opcao >= 1 && opcao <= 4);
}
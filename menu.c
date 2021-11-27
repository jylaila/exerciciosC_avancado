#include <stdio.h>

int main()
{

    int opcao;

    // while (opcao != 5)//teste no inicio, necessário inicializar a variável
    do
    {
        printf("------ Menu ------ \n");
        printf("Digite a opcao desejada:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            puts("Soma");
            break;
        case 2:
            puts("Subtracao");
            break;
        case 3:
            puts("Multiplicacao");
            break;
        case 4:
            puts("Divisao");
            break;
        case 5:
            puts("Sair");
            break;
        default:
            break;
        }
    }while(opcao !=5);

    return 0;
}
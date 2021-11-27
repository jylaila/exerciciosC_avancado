#include <stdio.h>

int main()
{

    int qtde, qtdeOntem, qtdeAntes;
    float total;

    printf("Digite a quantidade de itens vendidos hoje: \n");
    scanf("%d", &qtde);
    printf("Digite a quantidade de itens vendidos ontem: \n");
    scanf("%d", &qtdeOntem);
    printf("Digite a quantidade de itens vendidos antes de ontem: \n");
    scanf("%d", &qtdeAntes);
    total = (qtde + qtdeOntem + qtdeAntes) * 1.99;

    printf("Total Vendido R$ %.2f", total);

    return 0;
}

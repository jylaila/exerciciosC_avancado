#include <stdio.h>

int main()
{

    int cat;
    float preco;
    /*Categorias: 1 - 10,00 - 2 - 20,00 - 3 - 30,00 - Outras 25,00*/

    printf("Digite a categoria escolhida:");
    scanf("%d", cat);

    if (cat == 1)
        preco = 10.00;
    else if (cat == 2)
        preco = 20.00;
    else if (cat == 3)
        preco = 30.00;
    else
        preco = 25.00;

    /*Switch*/

    switch (cat)
    {
    case 1:
        preco = 10.00;
        break;
    case 2:
        preco = 20.00;
        break;

    case 3:
        preco = 30.00;
        break;

    default:
        preco = 25.00;
        break;
    }

    return 0;
}
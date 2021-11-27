#include <stdio.h>
int main()
{
    int x, j, idade, QtdeI, QtdeS, QtdeP, QtdePs;
    float peso, altura, mdaAltura = 0, mdaPeso = 0, mdaIdade;
    mdaIdade = 0;
    for (x = 0; x <= 2; x++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a idade do jogador: \n");
            scanf("%d", &idade);
            printf("Digite o peso do jogador: \n");
            scanf("%f", &peso);
            printf("Digite a altura do jogador: \n");
            scanf("%f", &altura);
            if (idade < 18)
                QtdeI = QtdeI + 1;

            else
                QtdeS = QtdeS + 1;

            if (peso < 80)
                QtdeP = QtdeP + 1;

            else
                QtdePs = QtdePs + 1;

            mdaIdade = mdaIdade + idade / j;
        }
        printf("A média das idades dos jogadores é de %f", mdaIdade);
    }
    printf("A quantidade de jogadores com idade inferior a 18 anos é %d", QtdeI);
    printf("A média das alturas de todos os jogadores do campeonato é %f", mdaAltura);
    printf("A percentagem de jogadores com mais de 80 quilos é de %f", mdaPeso);
    return 0;
}

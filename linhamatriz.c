#include <stdio.h>
#include <locale.h>

int main()
{

    int linha;
    char operacao[2];
    int i = 0;
    float soma = 0.0;
    float media = 0.0;
    float matriz[12][12];

    scanf("%d", &linha);
    scanf(" %s", &operacao);

    for (i = 0; i < 12; i++)
    {

        scanf("%f", &matriz[linha][i]);
    }

    for (i = 0; i < 12; i++)
    {

        printf("%0.1f\n\n", matriz[linha][i]);
    }

    if (operacao[0] == 'S' || operacao[0] == 's')
    {

        for (i = 0; i < 12; i++)
        {
            soma = soma + matriz[linha][i];
        }
        printf("%.1f\n\n", &soma);
    }
    else if (operacao[0] == 'M' || operacao[0] == 'm')
    {

        for (i = 0; i < 12; i++)
        {
            media = media + matriz[linha][i];
        }
        media = media / 12;
        printf("%.1f\n", &media);
    }

    return 0;
}
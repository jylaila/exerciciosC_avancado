#include <stdio.h>

int main()
{
    int idade, menorIdade;
    float peso, altura, mediaIdadeTime;

    for (int x = 1; x <= 5; x++)
    { //controlar os times

        for (int j = 0; j < 11; j++)
        { //controlar jogadores
            printf("Digite a idade, peso e altura");
            scanf("%d %f %f", &idade, &peso, &altura);

            if (idade < 18)
                menorIdade += 1;     //equivalente a menorIdade = menorIdade +1
                                     //mediaIdadeTime = mediaIdadeTime + idade;
            mediaIdadeTime += idade; //somo a idade
        }
        printf("A média de idade do time %d é %.2f", x, (mediaIdadeTime / 11));
    }

    printf("Menores de 18 anos %d", menorIdade);

    return 0;
}
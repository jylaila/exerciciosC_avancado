#include <stdio.h>

int main()
{

    int idade[5], somaIdade = 0, posMenor = 0, posMaior = 0;
    float salario[5], somaSalario = 0, maiorSalario = 0, menorIdade = 0;
    char nome[5][20];

    for (int i = 0; i < 5; i++)
    {
        printf("\n [%d] Nome: ", (i + 1));
        fflush(stdin);
        gets(nome[i]);

        printf("\n Idade: ");
        scanf("%d", &idade[i]);

        printf("\n Salario: ");
        scanf("%f", &salario[i]);

        somaIdade += idade[i]; //somaidade = somaidade + idade[i]
        somaSalario += salario[i];

        if (i == 0)
        { //inicializando as váriaveis para comparação
            menorIdade = idade[i];
            maiorSalario = salario[i];
        }

        if (idade[i] < menorIdade)
        {
            posMenor = i;
            menorIdade = idade[i];
        }

        if (salario[i] > maiorSalario)
        {
            posMaior = i;
            maiorSalario = salario[i];
        }
    }

    puts("\nPessoa com menor idade: ");
    printf("\n %s - %d anos - R$ %.2f", nome[posMenor], idade[posMenor], salario[posMenor]);

    puts("\n Pessoa com maior salario: ");
    printf("\n %s - %d anos - R$ %.2f", nome[posMaior], idade[posMaior], salario[posMaior]);

    puts("\n Nomes com menos de 6 caracteres: ");
    for (int x = 0; x < 5; x++)
    {
        if (strlen(nome[x]) < 6)
            printf("\n %s", nome[x]);
    }

    printf("\n Media da idade %f anos", (somaIdade / 5));
    printf("\n Media dos salarios R$ %.2f", (somaSalario / 5));

    return 0;
}
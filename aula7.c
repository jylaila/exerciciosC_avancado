#include <stdio.h>
int main()
{ // tipo nome = valor
    int idade, habilitacao;
    char nome[100];
    printf("Digite seu nome: \n");
    gets(nome);
    // fgets(nome,100, stdin);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Tem habilitacao: 1 - Sim / 2 - Nao ?");
    scanf("%d", &habilitacao);

    if (idade >= 18 && habilitacao == 1)
        printf("%s voce jah pode dirigir pois tem %d anos", nome, idade);
    else
        printf("%s voce nao pode dirigir", nome);

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    struct Boletim
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };

    struct Boletim aluno;

    printf("\n---------- Cadastro de aluno -----------\n\n\n");

    puts("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome, 50, stdin);

    puts("Digite a disciplina: ");
    fflush(stdin);
    fgets(aluno.disciplina, 50, stdin);

    puts("Digite a 1a. nota: ");
    scanf("%f", &aluno.nota_prova1);

    puts("Digite a 2a. nota: ");
    scanf("%f", &aluno.nota_prova2);

    printf("\n\n --------- Listando os dados do aluno---------\n\n");
    printf("Nome ...........: %s", aluno.nome);
    printf("Disciplina .....: %s", aluno.disciplina);
    printf("Nota da Prova 1 ...: %.2f\n", aluno.nota_prova1);
    printf("Nota da Prova 2 ...: %.2f\n", aluno.nota_prova2);
    printf("Média: %.2f", (aluno.nota_prova1 + aluno.nota_prova2)/2);

}
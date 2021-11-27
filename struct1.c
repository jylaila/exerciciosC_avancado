#include <stdio.h>
#include <string.h>

#define NUMREG 3

typedef struct
{
    char nome[20];
    char endereco[20];
    char telefone[20];
} agenda;

int main()
{

    agenda ag[NUMREG];

    int opcao = 0, registro = 0;
    char nomePesq[20];
    char TelPesq[20];

    do
    {

        puts("Digite a opcao desejada: ");
        puts("1 - Cadastrar");
        puts("2 - Excluir");
        puts("3 - Pesquisar Nome");
        puts("4 - Pesquisar Telefone");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);
            puts("Digite o nome: ");
            fgets(ag[registro].nome, 20, stdin);

            puts("Digite o telefone: ");
            fgets(ag[registro].telefone, 20, stdin);
            fflush(stdin);

            puts("Digite o endereco: ");
            fgets(ag[registro].endereco, 20, stdin);
            fflush(stdin);

            registro += 1;

            break;
        case 2:
            puts("Digite o nome a ser a excluido: ");
            fflush(stdin);
            fgets(nomePesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {
                if (strcmp(ag[i].nome, nomePesq) == 0) //1
                {
                    for (int j = i + 1; j < registro; j++)
                    {
                        strcpy(ag[j - 1].nome, ag[j].nome);         //substitui o registro atual pelo próximo
                        strcpy(ag[j - 1].endereco, ag[j].endereco); //substitui o registro atual pelo próximo
                        strcpy(ag[j - 1].telefone, ag[j].telefone); //substitui o registro atual pelo próximo
                        printf("Registro excluido %s", nomePesq);
                    }

                    registro--;
                    i = registro;
                }
            }

            break;
        case 3:
            puts("Digite o nome a ser a pesquisado: ");
            fflush(stdin);
            fgets(nomePesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {
                if (strcmp(ag[i].nome, nomePesq) == 0)
                {
                    printf("Telefone: %s", ag[i].telefone);
                    printf("Endereco: %s", ag[i].endereco);
                }
            }

            break;
        case 4:
            puts("Digite o Telefone a ser a pesquisado: ");
            fflush(stdin);
            fgets(TelPesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {
                if (strcmp(ag[i].telefone, TelPesq) == 0)
                {
                    printf("Nome: %s", ag[i].nome);
                    printf("Endereco: %s", ag[i].endereco);
                }
            }

            break;

        default:
            break;
        }

    } while (opcao >= 1 && opcao <= 4);
}

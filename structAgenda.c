#include <stdio.h>
#include <string.h>

#define NUMREG 2

typedef struct
{
    char nome[20];
    char endereco[20];
    char telefone[20];
} agenda;

int main()
{
    agenda ag[NUMREG];
    char nomePesq[20];
    char telPesq[20];
    int opcao = 0, registro = 0;

    do
    {
        puts("Digite a opcao desejada :");
        puts("1 - Cadastrar");
        puts("2 - Excluir");
        puts("3 - Pesquisar por nome");
        puts("4 - Pesquisar por telefone");
        puts("5 - Sair");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            puts("Digite o nome");
            fflush(stdin);
            fgets(ag[registro].nome, 20, stdin);

            puts("Digite o telefone");
            fflush(stdin);
            fgets(ag[registro].telefone, 20, stdin);

            puts("Digite o endereco");
            fflush(stdin);
            fgets(ag[registro].endereco, 20, stdin);

            registro += 1;

            break;
        case 2:
            puts("Digite o nome a ser excluido: ");
            fflush(stdin);
            fgets(nomePesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {
                if (strcmp(ag[i].nome, nomePesq) == 0){//

                    for(int j = i+1; j< registro; j++){
                        strcpy(ag[j-1].nome, ag[j].nome);
                        strcpy(ag[j-1].endereco, ag[j].endereco);
                        strcpy(ag[j-1].telefone, ag[j].telefone);

                        printf("Registro Excluido %s", nomePesq);

                    }
                }
                registro --;
                i = registro;                  
            }

            break;
        case 3:
            puts("Digite o nome a ser Pesquisado: ");
            fflush(stdin);
            fgets(nomePesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {

                if (strcmp(ag[i].nome, nomePesq) == 0)
                {
                    printf("Endereco: %s", ag[i].endereco);
                    printf("Telefone: %s", ag[i].telefone);
                }
            }

            break;
        case 4:
            puts("Digite o telefone a ser Pesquisado: ");
            fflush(stdin);
            fgets(telPesq, 20, stdin);

            for (int i = 0; i < registro; i++)
            {

                if (strcmp(ag[i].telefone, telPesq) == 0)
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
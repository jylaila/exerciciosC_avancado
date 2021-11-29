#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMREG 2

typedef struct
{
	char nome[100];
	int telefone;
} Contato;

int main()
{
	Contato agenda[NUMREG];
	char nome[100];

	int i;
	//adiciono 10 contatos
	for (i = 0; i < NUMREG; i++)
	{	fflush(stdin);
		printf("Digite o nome: ");
		gets(agenda[i].nome);
	
		printf("Digite o telefone: ");
		scanf("%d", &agenda[i].telefone);
	}

	//percorro toda a estrutura, comparando cada um dos nomes
	fflush(stdin);
	printf("Digite o nome a ser pesquisado: ");
	gets(nome);

	for (i=0; i<NUMREG; i++)
	{
		if (strcmp(agenda[i].nome, nome) == 0){
			puts("Achou!");
			exit(0);
		}	
    
	}
}

#include <stdio.h>
#include <stdlib.h>

void recebe(int *p, int tamanho);

int main()
{
	int *p, tamanho, i;

	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tamanho);

	p = (int *)malloc(tamanho * sizeof(int));

	if (!p)
	{
		printf("** Erro: Memoria Insuficiente **\n");
		exit;
	}
	else
	{
		printf("** Memoria Alocada com Sucesso **\n");
	}

	recebe(p, tamanho);

	for (i = 0; i < tamanho; i++)
	{
		printf("\n%i", p[i]);
	}

	free(p);
	printf("\n** Memoria Liberada com Sucesso **\n");
}

void recebe(int *ptr, int tamanho)
{
	int i;

	for (i = 0; i < tamanho; i++)
	{
		printf("Digite um valor para a posicao %i: ", i);
		scanf("%i", &ptr[i]);
	}
}

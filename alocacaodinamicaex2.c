// Faça uma função que receba um valor n e crie dinamicamente um vetor de n
// elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um
// vetor e um valor n e imprima os n elementos desse vetor. Construa também uma
// função que receba um ponteiro para um vetor e libere esta área de memória. Ao final,
// crie uma função principal que leia um valor n e chame a função criada acima. Depois,
// a função principal deve ler os n elementos desse vetor. Então, a função principal deve
// chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a
// memória alocada através da função criada para liberação.
// */

#include <stdio.h>
#include <stdlib.h>

int *criarVetor(int tam);
void imprimir(int *ptr, int n);
void liberaMemoria(int *ptr);

int main()
{
	int tam, *vet, i;

	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam);

	vet = criarVetor(tam);

	for (i = 0; i < tam; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &vet[i]);
	}

	imprimir(vet, tam);

	liberaMemoria(vet);

	return 0;
}

int *criarVetor(int tam)
{

	int *p = (int *)malloc(tam * sizeof(int));

	if (!p)
	{
		printf("** Erro: Memoria Insuficiente **\n");
		exit;
	}
	else
	{
		printf("** Memoria Alocada com Sucesso **\n");
	}

	return p;
}

void imprimir(int *ptr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("\n%i", ptr[i]);
	}
}

void liberaMemoria(int *ptr)
{
	free(ptr);
	printf("\nMemoria liberada!!!!!");
}

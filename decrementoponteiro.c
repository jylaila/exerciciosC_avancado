#include <stdio.h>
#define TAM 5

int main(void)
{
	int vet[TAM] = {10, 20, 30, 40, 50};
	int i;
	int *ptr;

	ptr = &vet[4];

	for (i = 0; i < TAM; i++)
	{
		(*ptr--)--; //decremento o valor do vetor
	}

	for (i = 0; i < TAM; i++)
	{
		printf("\n%i", vet[i]);
	}

	return 0;
}

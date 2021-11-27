#include <stdio.h>
#define TAM 10

int main()
{
	int i;
	int dados[TAM], dobro[TAM];
	
	for(i=0; i < TAM; i++)
	{
		scanf("%i", &dados[i]);
	}
	
	for(i=0; i < TAM; i++)
	{
		dobro[i] = dados[i] * 2;
	}
	
	for(i=0; i < TAM; i++)
	{
		printf("%i\n",dobro[i] );
	}
	
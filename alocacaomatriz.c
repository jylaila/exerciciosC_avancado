#include <stdio.h>
#include <stdlib.h>

void imprimir(float **p, int linhas, int colunas);

float **criaMatriz(int linhas, int colunas);

void inicializaMatriz(float **p, int linhas, int colunas);

void liberaMemoria(float **p, int linhas);

int main()
{
	float **p, linhas, colunas;

	printf("Digite a quantidade de linhas: ");
	scanf("%f", &linhas);

	printf("Digite a quantidade de colunas: ");
	scanf("%f", &colunas);

	p = criaMatriz(linhas, colunas);

	inicializaMatriz(p, linhas, colunas);

	imprimir(p, linhas, colunas);

	liberaMemoria(p, linhas);
}

void liberaMemoria(float **p, int linhas)
{
	int i;

	for (i = 0; i < linhas; i++)
		free(p[i]);

	free(p);
}

void inicializaMatriz(float **p, int linhas, int colunas)
{
	int i, j;
	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < colunas; j++)
			p[i][j] = 0;
	}
}

void imprimir(float **p, int linhas, int colunas)
{
	int i, j;

	for (i = 0; i < linhas; i++)
	{
		for (j = 0; j < colunas; j++)
			printf(" %.2f", p[i][j]);

		printf("\n");
	}
}

float **criaMatriz(int linhas, int colunas)
{
	float **p;
	int i;

	//Aloca os ponteiros para guardar todas as linhas da matriz
	p = (float **)malloc(linhas * sizeof(float *));

	if (!p)
	{
		printf("** Erro: Memoria Insuficiente **\n");
		exit;
	}

	//Aloca as colunas de float de cada linha da matriz
	for (i = 0; i < linhas; i++)
	{
		p[i] = (float *)malloc(colunas * sizeof(float));

		if (!p[i])
		{
			printf("** Erro: Memoria Insuficiente **\n");
			exit;
		}
	}

	return p;
}

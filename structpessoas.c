#include <stdio.h>
#include <locale.h>

#define TOTREG 10

typedef struct
{
	char nome[51];
	float peso;
	float altura;
	int idade;
	char tpsangue[4];
} Pessoa;

int main()
{
    Pessoa pes[TOTREG];

	setlocale(LC_ALL, "Portuguese");
	
	int x, pesmenorpeso, pesmaiorpeso, pesmaisbaixo, pesmaisalto, pesmaisnovo, pesmaisvelho;
	int maisnovo, maisvelho;
	float menorpeso, maiorpeso, maisbaixo, maisalto;
	//Preenchendo a estrutura
	for(x = 0; x < TOTREG; x++)
	{	
		printf("Entre com o nome do %d� indiv�duo: ", x + 1);
		fgets(pes[x].nome, 51, stdin);
		fflush(stdin);
	
		printf("Entre com o peso: ");
		scanf("%f", &pes[x].peso);
		fflush(stdin);
	
		printf("Entre com a altura: ");
		scanf("%f", &pes[x].altura);
		fflush(stdin);
	
		printf("Entre com a idade: ");
		scanf("%d", &pes[x].idade);
		fflush(stdin);
	
		printf("Entre com o tipo sangu�neo: ");
		fgets(pes[x].tpsangue, 4, stdin);
	}
	//Percorrendo a estrutura
	for(x = 0; x < TOTREG; x++)
	{//inicializando as vari�veis
        if(x == 0){
            menorpeso = pes[x].peso;
            maiorpeso = pes[x].peso;
            maisbaixo = pes[x].altura;
            maisalto = pes[x].altura;
            maisnovo = pes[x].idade;
            maisvelho = pes[x].idade;
            pesmenorpeso = x;
            pesmaiorpeso = x;
            pesmaisbaixo = x;
            pesmaisalto = x;
            pesmaisnovo = x;
            pesmaisvelho = x;
        }
        //comparando os valores
		if(pes[x].peso < menorpeso)
		{
			menorpeso = pes[x].peso;
			pesmenorpeso = x;
		}
		if(pes[x].peso > maiorpeso)
		{
			maiorpeso = pes[x].peso;
			pesmaiorpeso = x;
		}
		if(pes[x].altura < maisbaixo)
		{
			maisbaixo = pes[x].altura;
			pesmaisbaixo = x;
		}
		if(pes[x].altura > maisalto)
		{
			maisalto = pes[x].altura;
			pesmaisalto = x;
		}
		if(pes[x].idade < maisnovo)
		{
			maisnovo = pes[x].idade;
			pesmaisnovo = x;
		}
		if(pes[x].idade > maisvelho)
		{
			maisvelho = pes[x].idade;
			pesmaisvelho = x;
		}
	}
	//listando os dados
	printf("\nO indiv�duo com o menor peso �: %s e pesa %.2f quilos", pes[pesmenorpeso].nome,pes[pesmenorpeso].peso );
	printf("\nO indiv�duo com o maior peso �: %s e pesa %.2f quilos", pes[pesmaiorpeso].nome, pes[pesmaiorpeso].peso);
	printf("\nO indiv�duo mais baixo �: %s e tem %.2fm de altura", pes[pesmaisbaixo].nome, pes[pesmaisbaixo].altura);
	printf("\nO indiv�duo mais alto �: %s e tem %.2fm de altura", pes[pesmaisalto].nome, pes[pesmaisalto].altura);
	printf("\nO ind�viduo mais novo �: %s e tem %d anos", pes[pesmaisnovo].nome,  pes[pesmaisnovo].idade);
	printf("\nO indiv�duo mais velho �: %s e tem %d anos", pes[pesmaisvelho].nome, pes[pesmaisvelho].idade);
}

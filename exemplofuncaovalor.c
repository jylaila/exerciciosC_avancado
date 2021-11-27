// #include <stdio.h>

// void modificaValor(int *num);

// int main()
// {
//     int a = 20;
//     int *ptr = &a;

//     printf("Valor da variavel antes da chamada da funcao %d ", a );
//     modificaValor(ptr);
//     printf("\nValor da variavel depois da chamada da funcao %d ", a );

//     //chamada para função através da variável comum
//     modificaValor(&a);
//     printf("\nValor da variavel depois da 2a chamada da funcao %d ", a );

// }
// void modificaValor(int *num)
// {
//     *num = *num+1;//incremento mais um no valor da variável
// }

// #include <stdio.h>
// #define TAM 5

// void func(int *ptr, int tam);

// int main(void)
// {
//     int valor[TAM]= {10,20,30,40,50};
//     int i;

// 	func(valor, 5);

// 	for(i=0; i < TAM; i++)
// 	  printf("\n%i", valor[i]);

// 	return 0;
// }

// void func(int *ptr, int tam)
// {
// 	int i;

// 	for(i=0; i < tam; i++)
// 	{
// 		ptr[i] = i;
// 	}
// }

// void func1(int  num);
// void func2(int *ptr);

// int main(void)
// {
//     int valor =10;

//     printf("\nValor = %i", valor);
//     func1(valor);
//     printf("\nValor = %i", valor);
//     func2(&valor);
//     printf("\nValor = %i", valor);

// 	return 0;
// }

// //Passagem por valor
// void func1(int num){
//    num = 99;
// }

// //Ponteiro, passagem por referencia
// void func2(int *ptr){
// 	*ptr = 99;
// }

#include <stdio.h>

int main()
{
	int matriz4[2][2] = {1, 2, 3, 4};
	int *p = &matriz4[0][0];
	int **p2;

	//percorrendo a matriz através da aritmética de ponteiros
	printf("\n%d", *p++);
	printf("\n%d", *p++);
	printf("\n%d", *p++);
	printf("\n%d", *p++);

	p = &matriz4[0][0];
	p2 = &p;

	//percorrendo através de ponteiro para ponteiro
	printf("\n%d", **p2);
	p++;
	printf("\n%d", **p2);
	p++;
	printf("\n%d", **p2);
	p++;
	printf("\n%d", **p2);

	p = &matriz4[0][0];
	p2 = &p;

	printf("\n%d", **p2);
	printf("\n%d", *(*p2 + 1));
	printf("\n%d", *(*p2 + 2));
	printf("\n%d", *(*p2 + 3));
}

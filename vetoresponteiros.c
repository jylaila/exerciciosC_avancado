#include<stdio.h>
#define TAM 5

int main(){

    int valor[TAM] = {10,20,30,40,50};
    int *ptr, *ptr2;
    ptr = valor; //ptr = valor[0]
    ptr2 = &valor[4];//armazendo endereco do 5 elemento do vetor


    for(int i=0; i<TAM; i++){
            // printf("%d ", valor[i]);        
            printf("\n%i", *ptr++); //incrementa endereços e mostra o valor 1024, 1028, 1032, 
            printf("\n%i", ptr++); //incrementa endereços 1024, 1028, 1032
            printf("\n%i", (*ptr)++); //incrementa valores

    }

}


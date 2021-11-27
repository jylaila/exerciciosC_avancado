#include<stdio.h>
#include<stdlib.h>

main(){

    char palavra[30];
    int tamanho;

    puts("Digite uma palavra");
    gets(palavra);

    tamanho = strlen(palavra);
    printf("%d", tamanho);

    for(int i=0; i<strlen(palavra); i++){
        printf("%c", toupper(palavra[i]));
    }
     
    for(int i=0; i<strlen(palavra); i++){
        printf("%c", toupper(palavra[i]));
    }

}
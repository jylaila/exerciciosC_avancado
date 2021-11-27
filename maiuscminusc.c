#include<stdio.h>
#include<string.h>

main(){
 char palavra[30];

    puts("Digite uma palavra");
    gets(palavra);

    printf("Palavra em maiuscula: %s\n", strupr(palavra));
    printf("Palavra em minuscula: %s", strlwr(palavra));

}
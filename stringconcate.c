#include<stdio.h>
#include<string.h>

main(){
 char nome[30];
 char sobrenome[30];
 char nomeCompleto[60];

    puts("Digite o nome");
    fflush(stdin);
    gets(nome);    

    puts("Digite o sobrenome");
    fflush(stdin);
    gets(sobrenome);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat (nomeCompleto, sobrenome);

    printf("%s", nomeCompleto);

}
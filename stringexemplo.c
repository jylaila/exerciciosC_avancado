#include<stdio.h>
#include<string.h>

int main(){

    char nome[20];
    char nome2[10] = "Antonio";
 
    puts("Digite o nome");
    fflush(stdin);
    gets(nome);

    strcpy(nome, "joão"); //nome = João
    strcpy(nome, nome2); //nome = Antonio

    strcpy(nome, "João"); //nome = João
    strcat(nome, " ");//nome = João 
    strcat(nome, nome2); //nome = Joao Antonio

    int a = strlen(nome);

    for(int x=0; x < strlen(nome);x++)
  
    return 0;
}
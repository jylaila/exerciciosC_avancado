#include<stdio.h>
#include <locale.h>

int main(){

    //setlocale(categoria, local)
    //LC_ALL faz refer�ncia a todos os aspectos da localiza??o
    //"" configura a localiza��o de acordo com o sistema operacional
    setlocale(LC_ALL,"");
    printf("N�meros de 1 a 20");

    return 0;
}
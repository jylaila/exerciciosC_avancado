#include<stdio.h>
#include <locale.h>

int main(){

    //setlocale(categoria, local)
    //LC_ALL faz referência a todos os aspectos da localiza??o
    //"" configura a localização de acordo com o sistema operacional
    setlocale(LC_ALL,"");
    printf("Números de 1 a 20");

    return 0;
}
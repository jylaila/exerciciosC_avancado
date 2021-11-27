#include <stdio.h>
#include <stdlib.h>

void Dado(int x);

void main(){
    int a;
    int Lado[6] = {0,0,0,0,0,0};
    float porcentagem[6] = {0,0,0,0,0,0};

    for (int i = 0; i <= 100; i++){

       a = Dado(i);

        for(int j = 1; j <= 6; i++){
            if(a == j)
                Lado[j]++;
        }
    }
    for (int k = 1; k <= 6; k++){
        printf("\nLado[%d]: %d vezes, Porcentagem: %.2f",k,Lado[k],porcentagem[k]/1000000);
    }
}

void Dado(int x){
    x = rand() % 6 + 1;
    printf("\n%d", x);
    return x;
}
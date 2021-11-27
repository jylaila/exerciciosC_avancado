#include<stdio.h>

int main(){

    int a =20 ;
    printf("Valor de a %d: ", a);
    printf("\nEndereco de a %x: ", &a);

    float b = 35;
    float *ptr = &b;

    *ptr = 36.5;

}
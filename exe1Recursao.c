#include <stdio.h>

float multiplica(int num);

int main()
{
    int n;
    float resultado;
    puts("Digite um numero: ");
    scanf("%d", &n);
    resultado = multiplica(n);
    printf("A multiplicao eh %.2f", resultado);
}

float multiplica(int num)
{
    if (num <= 1)
    {
        return (1); //(1) problema, (0) ok
    }
    else
    {
        return num * multiplica(num - 1);
    }
}

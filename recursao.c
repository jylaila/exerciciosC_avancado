#include <stdio.h>

int somaVetor(int v[]);
float multiplica(int num);

int main()
{
    int vetor[] = {1, 3, 5, 7, 9};
    int x = sizeof(vetor)/sizeof(int);
    printf("= %d ", x);
    printf("O Resultado da multiplicacao e %f", multiplica(5));
    //printf("O Resultado da soma e %d", somaVetor(vetor));
}

int somaVetor(int v[])
{
    int i, soma = 0;

    for (i = 0; i < 5; i++)
    {
        /* soma = soma + v[i];*/
        soma += v[i];
    }
    return soma;
}

//somarecursao(5, {1, 3, 5, 7, 9})
int somarecursao(int n, int v[]){
    if(n==0){//vetor vazio
        return 0;
    }else
    return v[n-1]+somarecursao(n-1, v);
}


//chamada para funcao
// soma_num(8)

int soma_num(int num){
int resultado;

    if(num == 1){
        return (1);
    }
    else
    {
        resultado = num +soma_num(num-1);
    }

    return resultado;

}

float multiplica(int num){
    if(num <=1){
        return(1);
    }else{
        return num * multiplica(num - 1);
    }
}
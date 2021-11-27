#include<stdio.h>

//definição dos tipos
typedef void minhaFuncao(int x, int y);
typedef int minhaFuncaoSemParametros();

minhaFuncao *PtrparaminhaFuncao;
minhaFuncaoSemParametros *PtrparaminhaFuncaosemParametros;

int funcao(){
    //comandos
}
void funcao2(int x, int z){
    //comandos
}

int main()
{

    PtrparaminhaFuncaosemParametros = funcao; // define a função para qual o ponteiro aponta
    (*PtrparaminhaFuncaosemParametros) (); // realiza a chamada da função através do ponteiro

    PtrparaminhaFuncao = funcao2; // define a função para qual o ponteiro aponta
    (*PtrparaminhaFuncao) (10,20); // realiza a chamada da função através do ponteiro

}

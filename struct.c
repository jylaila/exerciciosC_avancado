#include <stdio.h>

int main()
{
    //Criar estrutura 1ª Forma
    struct Funcionario{
        //membros da estrutura
        int idade;
        char nome[20];
        float salario;
    };
    struct Funcionario func[5], funcionario_horista, funcionarioMensalista;
   
    //Criar estrutura 2ª Forma
    struct 
    {
        //membros da estrutura
        int idade;
        char nome[20];
        float salario;
        float salarioHora;

    }Funcionario1, func1, func2;
    Funcionario1.nome;

    //Criar estrutura 3ª Forma
    typedef struct 
    {   //membros da estrutura
        int idade;
        char nome[20];
        float salario;
    }Funcionario2;

//Atribuindo valor aos membros da estrutura
Funcionario2 funcFatec; //cadastrar 1 funcionário
funcFatec.idade = 29;
funcFatec.nome = "Emanoel";
strcpy(funcFatec.nome, "Emanoel");
funcFatec.salario = 14599.00;
 

//Trabalhar com vetores de estruturas
Funcionario2 funcFatecs[10];//cadastrar 10 funcionários
funcFatecs[0].idade = 30;
funcFatecs[0].nome = "Joao";
funcFatecs[0].salario = 21000.00;

funcFatecs[1].idade = 30;
funcFatecs[1].nome = "Joao";
funcFatecs[1].salario = 21000.00;
    






    


    return 0;
}
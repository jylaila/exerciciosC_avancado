#include <stdio.h>

//definir constante
//define nome valor
#define TOTREG 2

typedef struct
{
    char nome[20];
    int idade;
    float salario;

} Funcionario;

//tipo nomedavariavel [qtdelementos]
//vetor de funcionarios

int main()
{
    Funcionario func[TOTREG];

    int i, idMenorIdade = 0, idMaiorSalario = 0, menorIdade;
    float maiorSalario;
    //preencher nossa estrutura
    for (i = 0; i < TOTREG; i++)
    {
        printf("Digite o nome do funcionario: \n");
        fgets(func[i].nome, 20, stdin); //1º variável, 2º qtd de caracteres, 3º entrada
        fflush(stdin);

        printf("Digite a idade: \n");
        scanf("%d", &func[i].idade);
        fflush(stdin);

        printf("Digite o salario: \n");
        scanf("%f", &func[i].salario);
        fflush(stdin);

        if (i == 0) //primeira vez que entrei no loop
        {
            menorIdade = func[i].idade;
            maiorSalario = func[i].salario;
        }

        if (func[i].idade < menorIdade)
        {
            menorIdade = func[i].idade;
            idMenorIdade = i;
        }

        if (func[i].salario > maiorSalario)
        {
            maiorSalario = func[i].salario;
            idMaiorSalario = i;
        }
    }

    printf("\nPessoa com menor idade %s, idade %d, salario R$ %.2f", func[idMenorIdade].nome, func[idMenorIdade].idade, func[idMenorIdade].salario);

    printf("\nPessoa com maior salario %s, idade %d, salario R$ %.2f", func[idMaiorSalario].nome, func[idMaiorSalario].idade, func[idMaiorSalario].salario);
    return 0;
}
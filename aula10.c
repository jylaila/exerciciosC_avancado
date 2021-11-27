#include <stdio.h>
//definindo constantes
#define TAM 10

main()
{
    //definindo constantes
    const int TAM2 = 50;

    int n;

    //tipo identificador [qtd elementos]
    float media[7];

    //declaração e atribuição
    float media1[] = {8.5, 9, 8, 7.5};

    //6 valores(elementos) 0 - 5
    float media2[6] = {7.5, 9};

    float media3[n];

    //digite o qt de elementos do vetor
    //leia(n)
    //10
    //media3[10]
    float media4[TAM];
    int x = TAM * 4;

    float media5[x];
    char nome[10] = {"a", "b", "c", "\0"};
    char nome1[] = {"Fatec\0"};
    
    //atribuição individual
    media[1] = 7.5;
    scanf("%f", media[2]);

    media2[3] = 8;

    int x;
    //atribuição em série, sequencial
    for(x=0; x<TAM; x++){
        printf("Digite a média: ");
        scanf("%f", media4[x]);
        printf("%f", media4[x]);
    }

    //gets ou fgets
    //scanf("%s", nome); //"Fatec Sorocaba"
    //nome = "Fatec"
    //gets(nome); //"Fatec Sorocaba / SP"
    //fflush(stdin);
    //gets armazena \n
    //fgets(nome, 10, stdin);


//declaração de matrizes

float notas[10][3];
float notas[10][3] = {{},{},{}};

//linha coluna
notas[1][4] = 10;

int lin, col;

for(lin=0; lin < 10; lin++){//percorro as linhas
//notas[2]
    for(col=0; col<3; col++){
        //notas[2][2]
        notas[lin][col] = 0;
    }

}


}

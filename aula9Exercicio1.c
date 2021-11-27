#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int tpQuarto, tpEst, qtde, hrExcedente = 0;
    float vlPagar;

    puts("\n\n\n\n------------- Menu -------------");
    puts("Escolha a opção de Quarto desejada:");
    puts("(1) - Suite");
    puts("(2) - Suite Master");
    puts("(3) - Suite Mega Blaster");
    scanf("%d", &tpQuarto);

    puts("Você vai ficar: Escolha (1)Dias - (2)Horas?");
    scanf("%d", &tpEst);

    //Personalizo a mensagem de acordo com a escolha do usuário
    if (tpEst == 1)
    {
        puts("Quantos dias? ");
        scanf("%d", &qtde);
    }
    else
    {
        puts("Quantas horas? ");
        scanf("%d", &qtde);
        if (qtde > 6)
            hrExcedente = qtde - 6; //calculo a qtde de horas excedente
    }

    switch (tpQuarto)
    {
    case 1:
        if (tpEst == 1)           //dias
            vlPagar = 170 * qtde; //dias * vldoquarto
        else
            vlPagar = 70 + hrExcedente * 18;
        break;
    case 2:
        if (tpEst == 1)           //dias
            vlPagar = 190 * qtde; //dias * vldoquarto
        else
            vlPagar = 90 + hrExcedente * 22;
        break;
    case 3:
        if (tpEst == 1)           //dias
            vlPagar = 230 * qtde; //dias * vldoquarto
        else
            vlPagar = 120 + hrExcedente * 25;
        break;
    default:
        puts("Opção Inválida. Escolha um quarto.");
        break;
    }
    printf("Valor a pagar R$ %.2f", vlPagar);
    return 0;
    system("pause");
}

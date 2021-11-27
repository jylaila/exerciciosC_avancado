#include <stdio.h>

int main()
{
  int atualiza = 10; //declaração de variável
  int *p_atualiza;   //declaracao do ponteiro
  //ponteiro recebe endereço
  p_atualiza = &atualiza;

  //acessando os dados
  printf("Valores: atualiza = %d", atualiza);
  printf(", *p_atualiza = %d\n", *p_atualiza);       //valor de a
  printf("Endereco de Atualiza = %d\n", p_atualiza); //imprime o endereço de Atualiza
  printf("Endereco de Atualiza = %d\n", &atualiza);  //endereco de atualiza

  //alterando o valor da variável através do ponteiro
  *p_atualiza = *p_atualiza + 1;
  printf("Valores: atualiza = %d", atualiza);
}
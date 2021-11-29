#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b ); 
}
//vetor com os dados
int vetor[] = {1,2,3,4,5,6,7,8};

int main () {
   int *item;
   int vlPesquisado = 4;

   //Procurando o valor e retornando para o ponteiro
   //bsearch(VlPesquisado, tabela, qtdElementos, Tamtipo, funcao)
   item = (int*) bsearch (&vlPesquisado, vetor, 8, sizeof (int), cmpfunc);
   if( item != NULL ) {
      printf("Achou o valor  %d\n", *item);
   } else {
      printf("Valor = %d nao foi encontrado\n", vlPesquisado);
   }
   
   return(0);
}
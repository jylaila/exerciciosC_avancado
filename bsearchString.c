#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmpfunc(const void * a, const void * b) {
   return ( *(char*)a - *(char*)b ); 
}
//vetor com os dados
char nomes[20][5] = {"Taylor","Cindy","Noah","Mariana","Sandra"};

int main () {
   char *item;
   char nomePesquisado[] = "Taylor";

   //Procurando o valor e retornando para o ponteiro
   //bsearch(VlPesquisado, tabela, qtdElementos, Tamtipo, funcao)
   item = (char*) bsearch (&nomePesquisado, nomes, 5, sizeof (char), cmpfunc);
   if( item != NULL ) {
      printf("Achou o valor  %s\n", *item);
   } else {
      printf("Valor %s nao foi encontrado\n", nomePesquisado);
   }
   
   return(0);
}
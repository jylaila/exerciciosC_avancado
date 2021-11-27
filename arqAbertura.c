#include<stdio.h>

int main(){

//ponteiro que vai apontar para o arquivo
FILE *pont;

//abrir o arquivo na pasta c:\ no formato de escrita
// pont = fopen("c:\\arquivo.txt", "w");

//criar o arquivo no mesmo diretorio
pont = fopen("arquivo.txt", "w"); 

//verifico se houve algum erro
if(pont == NULL){
    puts("Erro ao abrir o arquivo.");
}
else{
    //comandos
    puts("Arquivo aberto com sucesso!");
}

fclose(pont);

}
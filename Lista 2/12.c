#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Exibe(char arquivo[]){
  //Variáveis de contagem
  int comecouPalavra = 0, numPalavras = 0, numLinhas = 0, numCaracteres = 0;
  char caracter;

        //criando o arquivo
        FILE *arq;

  //abrindo o arquivo em modo leitura
  arq = fopen(arquivo, "r");
      //validando se abrir corretamente
      if(arq==NULL){
        printf("erro ao abrir o arquivo\n");
        exit(1);
      }//if
  //while rodando até o final do arquvio
  while (!feof(arq)) {
      //lendo um caracter do arquivo
      fscanf(arq,"%c",&caracter);
      //incrementando
      numCaracteres++;
      //condições para contar caracter,linhas e palavras
      if  (caracter!=' ' && caracter!='\n' && !comecouPalavra){
         comecouPalavra = 1;
      }//if
      if  (caracter==' ' || caracter == '\n' && comecouPalavra){
         comecouPalavra = 0;
         numPalavras++;
      }//if
      if (caracter=='\n'){
         numLinhas++;
       }//if
  }//while


  //exibindo pro usuário
  printf("\n O numero de palavras do arquivo e: %d", numPalavras);
  printf("\n O numero de linhas do arquivo e: %d", numLinhas);
  printf("\n O numero de caracteres do arquivo e: %d", numCaracteres);

  //fechando o arquivo
  fclose(arq);
  //retornando que o código rodou com exito
}//Exibe

int main(){

    char arquivo[50];

    //recebendo o nome do arquivo
    printf("Digite o arquivo que deseja abrir: ");
    setbuf(stdin,NULL);
    fgets(arquivo,49,stdin);
    arquivo[strcspn(arquivo,"\n")]='\0';

    Exibe(arquivo);

  return 0;
}//main

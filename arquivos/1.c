#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
. Faça um programa que receba do usuário um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere ocorre dentro do arquivo.
@Guilherme Moreira
*/

int main(){

  ///váriaveis
  char nome[10],caracter,aux;

  int contador=0;

    FILE*arq;

    //recebendo nome do arquivo
    printf("Digite o nome do arquivo: ");
    setbuf(stdin,NULL);
    fgets(nome,9,stdin);
    nome[strcspn(nome,"\n")]='\0';

    //abrindo arquivo
    arq=fopen(nome,"r");
    if(arq==NULL){
      printf("Erro ao abrir o arquivo\n");
      exit(1);
    }//if

    printf("Digite o caracter que deseja pesquisar no arquivo: ");
    scanf("%c",&caracter);

    //percorrendo até o final do arquivo
    while(!feof(arq)){
      aux=fgetc(arq);
        if(aux == caracter){
          contador++;
        }//if
    }//while

    printf("\n");
    printf("O caracter informado aparece [%d] vezes no arquivo\n",contador);

  fclose(arq);
  free(arq);
  return 0;
}//return 0

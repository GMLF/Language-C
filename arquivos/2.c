#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int **Arquivo(char nome[],FILE *arq,int *linha, int *coluna){
  //váriaveis
  int **matriz;
    //abrindo arquivo
    arq=fopen(nome,"r");

    //validando arquivo
    if(arq==NULL){
    printf("erro ao abrir\n");
    exit(1);
  }//if

  else{
    //recebendo linha e coluna do arquivo
    fscanf(arq,"%d""%d",&(*linha),&(*coluna));

    //alocando linhas matriz
    matriz=(int**)malloc((*linha)*sizeof(int*));

    //alocando colunas matriz
    for(int i=0;i<(*linha);i++){
      matriz[i]=(int*) malloc((*coluna)*sizeof(int));
    }//for
  }//else

    for(int l=0;l<(*linha);l++){
      for(int c=0;c<(*coluna);c++){
        fscanf(arq,"%d",&matriz[l][c]);
      }//(*coluna)
    }//(*linha)


   //fechando arquivo
   fclose(arq);
  //retornando ponteiro pra memória alocada para a matriz
  return matriz;
}//arquivo

int main(){
  //váriaveis
  char nome[10];
  int **matriz,linha=0,coluna=0;

  printf("Digite o nome do arquivo: ");
  setbuf(stdin,NULL);
  fgets(nome,9,stdin);
  nome[strcspn(nome,"\n")]='\0';

  //criando arquivo
  FILE *arq;
  //chamando função
  matriz=Arquivo(nome,arq,&linha,&coluna);

  for(int l=0;l<linha;l++){
    for(int c=0;c<coluna;c++){
      printf("%d ",matriz[l][c]);
    }//coluna
    printf("\n");
  }//linha

    //liberando a memória das colunas
    for(int i=0;i<linha;i++){
      free(matriz[i]);
    }//for

    //liberando as linhas
    free(matriz);

  return 0;
}

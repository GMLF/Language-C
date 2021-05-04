#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[150];
  char esporte[60];
  int idade;
  float altura;
}Cadastro;


void Exibe(FILE *arq){
    //váriaveis
    Cadastro atletas[5];
    float alto;
    int velho,aux=0,aux2=0;

    //abrindo o arquivo em leitura binária
    arq=fopen("3.txt","rb");
      //validando o arquivo
      if(arq==NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
      }else{
        //lendo os atletas do arquivo
        fread(atletas,sizeof(Cadastro),5,arq);

        //definindo o primeiro como mais alto e mais velho para comparar
        velho=atletas[0].idade;
        alto=atletas[0].altura;

        //percorrendo para fazer comparação com todos atletas
      for(int i=0;i<5;i++){
        //verificando mais alto
        if(atletas[i].altura>alto){
          alto=atletas[i].altura;
          aux2++;
        }//if mais alto
          //verificando o mais velho
          if(atletas[i].idade>velho){
            velho=atletas[i].idade;
            aux++;
        }//if mais velho
      }//for

      //exibindo os respectivos nomes
      printf("[%s] e o atleta mais alto\n [%s] e o atleta mais velho\n",atletas[aux2].nome,atletas[aux].nome);
    }//else

  //fechando arquivo e voltando p main
  fclose(arq);
}//Exibe


int main(){
  //váriaveis
  FILE * arq;

    //chamando função
    Exibe(arq);

  return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Faça um programa que leia os dados gerados pelo programa do exercício anterior e mostre
na tela as informações referentes aos alunos. Calcule e mostre na tela a média geral da turma
e o nome do aluno com a maior média.

@Guilherme Moreira 30/04/2021
*/

typedef struct{
char nome[100];
float nota1,nota2,media;
}Estudante;

int main(){
  //váriaveis
  float mg=0,maior_media=0;
  int aux=0;
  Estudante p[3];
    //arquivo
    FILE *arq;
    //abrindo o arquivo em leitura
    arq=fopen("1.txt","r");
      //verificando se o arquivo foi aberto
      if(arq==NULL){
        printf("erro\n");
        system("pause");
        exit(1);
      }//if
//for
for(int i=0;i<3;i++){
  //lendo do arquivo
  fscanf(arq, "%[^,], %f, %f, %f", p[i].nome, &p[i].nota1, &p[i].nota2, &p[i].media);
    //cálculo maior media
    mg+=p[i].media;
}//for

  //realizando cálculo media geral
  mg=mg/3;
    //atribuindo o primeiro valor de comparação
    maior_media=p[0].media;
//for pra atualizar o aluno com maior media e salvar seu posicionamento
  for(int i=0;i<3;i++){
    if(p[i].media>maior_media){
      maior_media=p[i].media;
        aux=i;
      }//if
  }//for

//exibindo
printf("O aluno com a maior media foi o %s\n A media geral da turma foi de %.2f\n",p[aux].nome,mg);
  //fechando o arquivo
  fclose(arq);
//return 0
return 0;
}//main

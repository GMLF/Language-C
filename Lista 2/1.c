#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
Faça um programa que leia do teclado um cadastro de 10 alunos, indicando o nome, nota1,
nota2. Calcule a média aritmética simples de cada um dos 10 alunos e, depois, escreva em
um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média. As notas e média
deverão ser apresentadas como valores que possuem 2 casas decimais.

@Guilherme Moreira 30/04/21
*/

typedef struct{
 char nome[100];
 float nota1,nota2,media;
}Escola;

int main(){
//váriaveis
Escola aluno[2];
  //for
  for(int i=0;i<2;i++){
    //tratando da limpeza do buffer
  printf("Digite o nome do [%d] aluno: ",i+1);
  setbuf(stdin,NULL);
  fgets(aluno[i].nome,99,stdin);
  aluno[i].nome[strcspn(aluno[i].nome,"\n")]='\0';

  //Nota 1
  printf("Digite a 1 nota do [%d] aluno: ",i+1);
  scanf("%f",&aluno[i].nota1);
  //nota2
  printf("Digite a 2 nota do [%d] aluno: ",i+1);
  scanf("%f",&aluno[i].nota2);
    //calculando a media
    aluno[i].media+=(aluno[i].nota1+aluno[i].nota2)/2;
    printf("\n");
  }//for
    //ponteiro do tipo arquivo
    FILE *arq;
    //abrindo o arquivo no tipo escrita
    arq=fopen("1.txt","w");
    if(arq==NULL){
      printf("erro\n");
      system("pause");
      exit(1);
    }

    for(int i=0;i<2;i++){
      fprintf(arq,"%s," " %.2f," " %.2f," " %.2f",aluno[i].nome,aluno[i].nota1,aluno[i].nota2,aluno[i].media);
    }//for
    fclose(arq);
    //return
  return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Faça um programa que peça para o usuário fornecer uma palavra que deseja procurar e, em
seguida, leia um arquivo texto do disco e procure por esta palavra no arquivo. Caso seja
encontrada a palavra digitada pelo usuário em alguma das linhas do arquivo lido, o
programa deverá exibir na tela o número da linha onde encontrou esta ocorrência, bem como
o conteúdo da linha onde se encontra a palavra procurada.

@Guilherme Moreira 01/05/2021
*/

int main(){
  //váriaveis
  int i=0,linha=0;
  char frase[30],str[100];
    //solicitando frase
    printf("Digite a frase que deseja procurar: ");
    fgets(frase,29,stdin);
    setbuf(stdin,NULL);
    frase[strcspn(frase,"\n")]='\0';
//váriavel do tipo arquivo
FILE *leitura;
//abrindo arquivo
leitura=fopen("3.txt","r");
  if(leitura==NULL){
    printf("erro ao abrir\n");
    system("pause");
    exit(1);
  }//if

printf("\n");

//função que vai até o final do arquivo
while(!feof(leitura)){
      //pegando a frase
      linha++;
       fgets(str,100,leitura);
       //if
        if(strstr(str,frase)!=NULL){
          printf("linha [%d]: %s",linha,str);
          i=1;
          break;
        }//if
}//else
if(i==0){
  printf("Palavra nao existe no arquivo\n");
}
fclose(leitura);
  return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  //váriaveis
  char frase[501];
  int tamanho=0;
    //Removendo caracter nulo
    fgets(frase,500,stdin);
    frase[strcspn(frase,"\n")]='\0';
    setbuf(stdin,NULL);
    //vendo o tamanho da string
      tamanho=strlen(frase);
      //comparando
    if(tamanho<=140){
      printf("TWEET\n");
    }else
    printf("MUTE\n");
  return 0;
}

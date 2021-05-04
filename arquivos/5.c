#include <stdlib.h>
#include <stdio.h>

void Preenche(FILE *arq){
  //váriaveis
  int numerador=0,denominador,contador,numero=10000;

  //abrindo o arquivo em escrita formatada
  arq=fopen("5.txt","w");

    //validando o arquivo
    if(arq==NULL){
      printf("Erro ao abrir o arquivo\n");
      exit(1);
    }else{
          //laço dos primeiros 10k numeros
            do{
              numerador++;
               contador=0;
               //realizando o cálculo dos primos
               for(denominador=1;denominador<numerador;denominador++)
                   if(numerador%denominador==0){
                   contador++;
                 }//if

              //if salvando no arquivo os numeros primos
               if(contador==1){
                  //salvando no arquivo
                  fprintf(arq,"%d\n",numerador);
                   numero--;
               }//if
            }while(numero); //Repete o bloco enquanto d for diferente de zero 0.

    }//else

    //fechando o arquivo
    fclose(arq);
}//


int main(){
  //criando o arquivo
  FILE *arq;

  //chamando funçãoncãonce
  Preenche(arq);
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//função recursiva que cálcula a função tetranacci
int tetranacci(int numero) {
  //caso base, caso ele deseje um n-ésimo menor que 4

	if(numero<4) {
	 	 return 0;
	}else if(numero<5){
		 return 1;
	}else{
	   return tetranacci(numero - 1) + tetranacci(numero - 2) + tetranacci(numero - 3) + tetranacci(numero - 4);
  }//else
}//tetranacci

 int main(){
   //váriaveis
   int numero=0;
   //solicitando o n-ésimo termo que o usuário quer saber
   printf("Digite qual N-esimo termo da sequência de tetranacci voce deseja saber:");
   scanf("%d",&numeros);

   //exibindo o resultado da função tetranacci
   printf("\nN-esimo termo da sequência de tetranacci: %d ",tetranacci(numeros));
   return 0;
 }//main

#include <stdio.h>
#include <stdlib.h>


#define MAX 2000

int main(){
 int qtd,i, numeros[MAX],num[MAX];

 scanf("%d",&qtd);

 for(i=0;i<MAX;i++){
 numeros[i]=0;
 }
 for(i=0;i<qtd;i++){
  scanf("%d",&num[i]);
 }

 for(i=0;i<qtd;i++){
  numeros[num[i]]++;
 }
 for(i=0;i<MAX;i++){
  if(numeros[i]!=0)
   printf("%d aparece %d vez(es)\n",i,numeros[i]);
 }

 return 0;
}

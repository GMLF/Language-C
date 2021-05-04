#include <stdlib.h>
#include <stdio.h>

int main(){
int numero=0,i;
do{
  scanf("%d",&numero);
}while(numero<0 || numero>1000);
for(i=1;i<=10;i++){
  printf("%d x %d = %d \n",i,numero,numero*i);
}
  return 0;
}

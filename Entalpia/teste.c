#include <stdio.h>
#include <stdlib.h>

int Calcula(int x, int b){
int aux=0;
aux=x+b;
return aux;
}//calcula


int main(){
int x=1,b=1,c=0;

c=Calcula(x,b);
printf("%d",c);
  return 0;
}

#include <stdlib.h>
#include <stdio.h>

int main(){
//váriaveis
  int idade=0,total=0,cont_idades=0;
//Solicitando entrada do usuário
    scanf("%d",&idade);
//Laço de repetição
while(idade>0){
if(idade>0){
cont_idades++;
total+=idade;
}//if
scanf("%d", &idade);
}//while
printf("%.2f\n",(float)total/cont_idades);
return 0;
}

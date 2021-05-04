#include <stdlib.h>
#include <stdio.h>

int main(){
    //váriaveis
    int numero=0,n1=100,n2=50,n3=20,n4=10,n5=5,n6=2,n7=1;
    int cn1=0,cn2=0,cn3=0,cn4=0,cn5=0,cn6=0,cn7=0;
    //verificando
    do{
      scanf("%d",&numero);
    }while(numero<=0||numero>1000000);
printf("%d\n",numero);
while(numero>0){
  if(numero>=n1){
    numero-=n1;
    cn1++;
  }else if(numero>=n2){
    numero-=n2;
    cn2++;
  }else if(numero>=n3){
    numero-=n3;
    cn3++;
  }else if(numero>=n4){
    numero-=n4;
    cn4++;
  }else if(numero>=n5){
    numero-=n5;
    cn5++;
  }else if(numero>=n6){
    numero-=n6;
    cn6++;
  }else{
    numero-=n7;
    cn7++;
  }
}
printf("%d nota (s) de R $ 100,00\n",cn1);
printf("%d nota (s) de R $ 50,00\n",cn2);
printf("%d nota (s) de R $ 20,00\n",cn3);
printf("%d nota (s) de R $ 10,00\n",cn4);
printf("%d nota (s) de R $ 5,00\n",cn5);
printf("%d nota (s) de R $ 2,00\n",cn6);
printf("%d nota (s) de R $ 1,00\n",cn7);
  return 0;
}

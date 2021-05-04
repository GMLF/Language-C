#include <stdio.h>

int main(){
    //váriaveis
    int funcionarios[3],i,temp1=0,temp2=0,temp3=0,menor_temp=0;

    for(i=0;i<3;i++){
do{
      scanf("%d",&funcionarios[i]);
    }while(funcionarios[i]<0||funcionarios[i]>10000);
}
temp1=funcionarios[0]*0+funcionarios[1]*2+funcionarios[2]*4;
temp2=funcionarios[0]*2+funcionarios[1]*0+funcionarios[2]*2;
temp3=funcionarios[0]*4+funcionarios[1]*2+funcionarios[2]*0;
if(temp1<=temp2){
  menor_temp=temp1;
}else{
  menor_temp=temp2;
}if(menor_temp>=temp3){
  menor_temp=temp3;
}
printf("%d\n",menor_temp);
  return 0;
}

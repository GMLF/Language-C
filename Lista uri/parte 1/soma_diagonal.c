#include <stdlib.h>
#include <stdio.h>

int main(){
double m[12][12],soma=0;
int i,j;
char opcao;

do{
  scanf("%s",&opcao);
}while(opcao!='S'&& opcao!='M');

for(i=0;i<12;i++){
  for(j=0;j<12;j++){
    scanf("%lf",&m[i][j]);
  }
}
for(i=0;i<=10;i++){
  for(j=0;j<=10-i;j++){
    soma+=m[i][j];
    if(opcao=='M'){
      soma=soma/66.0;
      printf("%.lf\n",soma);
    }//if
  }
}
printf("%.1f\n",soma);
  return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
double matriz[12][12],soma=0;
char O[2];
int i,j,n=1,m=10;

scanf("%s",&O);
for(i=0;i<12;i++){
  for(j=0;j<12;j++){
    scanf("%lf",&matriz[i][j]);
}
if(O[0]=='S'){
  printf("%.1lf\n",soma);
}else{
  printf("%.lf\n",soma/30.0);
}
  return 0;
}

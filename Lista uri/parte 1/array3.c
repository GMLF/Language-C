#include <stdio.h>

int main(){
    double vetor[100],numero;
    int i;

  scanf("%lf",&numero);
  vetor[0]=numero;
for(i=1;i<=99;i++){
  vetor[i]=vetor[i-1]/2.0;
}
for(i=0;i<100;i++){
printf("N[%d] = %.4lf\n",i,vetor[i]);
  }
  return 0;
}

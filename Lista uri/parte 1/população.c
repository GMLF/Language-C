#include <stdio.h>

int main(){

    int i,pa,pb,t,y;
    double ga,gb;
    scanf("%d",&t);
    for(i=0;i<t;i++){
      y=0;
      scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
      while(pa<=pb){
        pa=pa+((pa*ga)/100);
        pb=pb+((pb*gb)/100);
        y++;
        if(y>100){
          printf("Mais de 1 seculo.\n");
          break;
        }
      }
      if(y<=100){
      printf("%d anos.\n",y);
      }
    }
    return 0;
}

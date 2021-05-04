#include <stdio.h>
#include <math.h>

int main(){
    //váriaveis
    int voltas=0,sinais=0;
    int total=0;

    scanf("%d %d",&voltas,&sinais);

    total=voltas*sinais;

    printf("%.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f %.0f\n",ceil(total*0.1),ceil(total*0.2),ceil(total*0.3),ceil(total*0.4),ceil(total*0.5),ceil(total*0.6),ceil(total*0.7),ceil(total*0.8),ceil(total*0.9));
  return 0;
}

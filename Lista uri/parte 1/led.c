#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
  int vezes,i,tamanho=0,leds,j;
  char numero[105];

      scanf("%d",&vezes);

      for(i=0;i<vezes;i++){
        scanf("%s",&numero);
        tamanho=strlen(numero);
        leds=0;
        for(j=0;j<tamanho;j++){
          if(numero[j]=='1'){
          leds+=2;
        }else if(numero[j]=='2'||numero[j]=='3'||numero[j]=='5'){
          leds+=5;
        }else if(numero[j]=='4'){
          leds+=4;
        }else if(numero[j]=='6'||numero[j]=='9'||numero[j]=='0'){
          leds+=6;
        }else if(numero[j]=='7'){
          leds+=3;
        }else if(numero[j]=='8'){
          leds+=7;
        }//else
        }//for
        printf("%d leds\n",leds);
      }//for

  return 0;
}

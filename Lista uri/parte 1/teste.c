#include <stdio.h>
int main()
{
    int a,b,i,j,n,p;
    int x=0, y=0, z=0, w=0;
 int par[5],impar[5],numeros[15];

    for(b=0; b<15; b++){
        scanf("%d", &numeros[b]);
      }//for

    for(a=0; a<15; a++){

        if(numeros[a]%2!=0){
            impar[x]=numeros[a];
            ++x;
            y++;
            if(x==5) x=0;
        }

        if(numeros[a]%2==0){
            par[w]=numeros[a];
            ++w;
            z++;
            if(w==5) w=0;
        }
        if(y==5){
            for(n=0; n<5; n++){
                printf("impar[%d] = %d\n", n, impar[n]);
            y=0;
          }//for
        }//if

        if(z==5){
            for(p=0; p<5; p++){
                printf("par[%d] = %d\n", p, par[p]);
            z=0;
          }//for
        }//if
    }//for
    for(i=0; i<y; i++){
            printf("impar[%d] = %d\n", i, impar[i]);
            }
    for(j=0; j<z; j++){
            printf("par[%d] = %d\n", j, par[j]);
          }//for
    return 0;
}

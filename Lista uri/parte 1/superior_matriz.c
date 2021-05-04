#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    int inicio=1, fim=10, i, j, contador = 0;
    char op;
    double matriz[12][12], total = 0;

    scanf("%c", &op);

    for (i = 0; i < 12;i++){
        for(j = 0; j < 12;j++)
        scanf("%lf", &matriz[i][j]);
      }
    for (i = 0; i < 5; i++){
        for(j = inicio; j <= fim; j++){
            total+= matriz[i][j];
            contador++;
        }//for
        inicio++;
        fim--;
    }//for

    if (op == 'S')
        printf("%.1lf\n",total);

    if (op == 'M')
    {
        total = total/contador;
        printf("%.1lf\n",total);
    }
    return 0;
}//return

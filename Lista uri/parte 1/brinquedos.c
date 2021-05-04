#include <stdio.h>

int main(){

    char sexo;
    int vezes, meninos=0, meninas=0;
    char nome[100];

    scanf("%d", &vezes);

    while (vezes--){

        scanf("%s %c",&nome, &sexo);

        if (sexo == 'F'||sexo=='f'){
            ++meninas;
          }else{
            ++meninos;
          }
    }//while
    printf("%d carrinhos\n%d bonecas\n", meninos, meninas);
    return 0;
}

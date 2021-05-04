#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){

    FILE *e, *s;
    int c;

    e = fopen("6.txt","r");
    if(e == NULL){
        printf("\nNão foi possível abrir o arquivo de entrada!");
          exit(1);
    }

    s = fopen("6.txt","r+");
    if(s == NULL){
        printf("Não foi possível abrir o arquivo de saída!");
        exit(1);
    }

    //Lê a entrada e escreve na saída
    else{

     while((c=fgetc(e))!=EOF){
        fputc(toupper(c),s);
    }

}
    fclose(e); free(e);
    fclose(s); free(s);
    return 0;
}

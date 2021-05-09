#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void Arquivos(FILE *arq1,FILE*arq2,FILE*arq3,int argc,char **argv){
  //váriavel auxiliar
  int c=0;

  if(argc < 4){//verifica se o usuário passou um argumento por argv
    printf("nenhum parametro fornecido\n");
    system("pause");
    exit(1);
  }

                            //Abrindo os arquivos
  arq1=fopen(argv[1],"r"); arq2=fopen(argv[2],"r"); arq3=fopen(argv[3],"w");
      if(arq1==NULL||arq2==NULL||arq3==NULL){
        printf("erro ao abrir o arquivo\n");
        exit(1);
      }

  while((c=fgetc(arq1))!=EOF){
     fputc(c,arq3);
 }
 while((c=fgetc(arq2))!=EOF){
    fputc(c,arq3);
}

fclose(arq1);
fclose(arq2);
fclose(arq3);
free(arq1);
free(arq2);
free(arq3);
}//Arquivos

int main(int argc, char** argv){

    FILE*arq1,*arq2,*arq3;

  Arquivos(arq1,arq2,arq3,argc,argv);

  return 0;
}//main

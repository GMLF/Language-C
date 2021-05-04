#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[150];
  char esporte[60];
  int idade;
  float altura;
}Cadastro;

void Preenche(Cadastro atleta[],int quantidade){
    //Preenchendo a struct
    for(int i=0;i<quantidade;i++){
      //recebendo o nome do atleta
      setbuf(stdin,NULL);
      printf("Digite o nome do [%d] atleta: ",i+1);
      setbuf(stdin,NULL);
      fgets(atleta[i].nome,149,stdin);
      atleta[i].nome[strcspn(atleta[i].nome,"\n")]='\0';

      //recebendo o esporte
      printf("Digite o esporte do [%d] atleta: ",i+1);
      setbuf(stdin,NULL);
      fgets(atleta[i].esporte,59,stdin);
      atleta[i].esporte[strcspn(atleta[i].esporte,"\n")]='\0';

      //recebendo a idade
      printf("Digite a idade do [%d] atleta: ",i+1);
      scanf("%d",&atleta[i].idade);

      //recebenfo a altura
      printf("Digite a altura do [%d] atleta: ",i+1);
      scanf("%f",&atleta[i].altura);
      printf("\n");
    }//for

    //criando o arquivo
    FILE *arq;

    //abrindo o arquivo
    arq=fopen("3.txt","wb");
      //validando o arquivo
      if(arq==NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
      }

      //escrevendo os dados do atleta no arquivo em formato binário
      fwrite(atleta,sizeof(Cadastro),3,arq);

fclose(arq);
}//preenche

int main(){
  //váriaveis
  Cadastro atleta[3];

    //chamando função
    Preenche(atleta,3);

  return 0;
}

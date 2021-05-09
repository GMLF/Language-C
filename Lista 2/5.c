#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
char nome[100];
char endereco[100];
char data[20];
}Cadastro;

Cadastro *Memoria(int quantidade, Cadastro *cliente){
  //ponteiro auxiliar
  Cadastro *aux;
    //alocando a memória para a quantidade informada
    aux=malloc(quantidade*sizeof(Cadastro));
  //retornando o ponteiro alocado para a quantidade de clientes
  return aux;
}//Memoria

void Adicionar_cliente(Cadastro *cliente, int quantidade){

//criando arquivo
FILE*arq;
//abrindo o arquivo em modo escrita binária
arq=fopen("5.txt","wb");
    //validando abertura
    if(arq==NULL){
      printf("Erro ao abrir\n");
      exit(1);
    }//if
    if(quantidade==0){
      printf("Impossivel cadatrar 0 clientes\n");
    }//if

  printf("---------------------------------------\n");
  //for preenchendo a quantidade de cliente informado pelo usuário
  for(int i=0;i<quantidade;i++){
    setbuf(stdin,NULL);
    printf("Digite o nome do [%d] cliente: ",i+1);
    setbuf(stdin,NULL);
    fgets(cliente[i].nome,99,stdin);
    cliente[i].nome[strcspn(cliente[i].nome,"\n")]='\0';

    printf("Digite o endereco do [%d] cliente: ",i+1);
    setbuf(stdin,NULL);
    fgets(cliente[i].endereco,99,stdin);
    cliente[i].endereco[strcspn(cliente[i].endereco,"\n")]='\0';


    printf("Digite a data do [%d] cliente: ",i+1);
    setbuf(stdin,NULL);
    fgets(cliente[i].data,19,stdin);
    cliente[i].data[strcspn(cliente[i].data,"\n")]='\0';
    printf("\n");
  }//for
    printf("---------------------------------------\n");
  //gravando no arquivo em modo binario
  fwrite(cliente,sizeof(Cadastro),quantidade,arq);
  //fechando o arquivo
  fclose(arq);
}//adicionar cliente

void Altera(Cadastro *cliente,int quantidade){
    //váriaveis
    int posicao=0;
      //criand oarquivo
      FILE *arq;

      arq=fopen("5.txt","rb");
        //validando
        if(arq==NULL){
          printf("erro ao abrir\n");
          return;
        }
          //solicitando a posicao que quer alterar
          printf("Digite a posicao do cliente que deseja alterar: ");
          scanf("%d",&posicao);
    printf("---------------------------------------\n");
        if(posicao>=quantidade){
        printf("\nA posicao informada, nao foi encontrada\n");
    printf("---------------------------------------\n");
        }  if(quantidade==0){
            printf("\nNao possui clientes cadastrados\n");
          }//if
else{
        fread(cliente,sizeof(Cadastro),quantidade,arq);

    printf("---------------------------------------\n");
    //for preenchendo a quantidade de cliente informado pelo usuário

      setbuf(stdin,NULL);
      printf("Digite o nome do cliente: ");
      setbuf(stdin,NULL);
      fgets(cliente[posicao].nome,99,stdin);
      cliente[posicao].nome[strcspn(cliente[posicao].nome,"\n")]='\0';

      printf("Digite o endereco do cliente: ");
      setbuf(stdin,NULL);
      fgets(cliente[posicao].endereco,99,stdin);
      cliente[posicao].endereco[strcspn(cliente[posicao].endereco,"\n")]='\0';


      printf("Digite a data do cliente: ");
      setbuf(stdin,NULL);
      fgets(cliente[posicao].data,19,stdin);
      cliente[posicao].data[strcspn(cliente[posicao].data,"\n")]='\0';
      printf("\n");
}//else
      fwrite(cliente,sizeof(Cadastro),quantidade,arq);
      printf("---------------------------------------\n");

      for(int i=0;i<quantidade;i++){
        printf("[%s]\n idade:[%d]\n telefone:[%s]\n\n",cliente[i].nome,cliente[i].endereco,cliente[i].data);
      }//for
      printf("------------------------------------------\n");

fclose(arq);
}//Altera

int main(){
  //váriaveis
  int opcao=0,quantidade=0;
  Cadastro *cliente;

do{
  //menu
  printf("          Menu\n");
  printf("1 - Adicionar informacoes dos clientes\n2 - Alterar informacoes de um cliente\n3 - Imprimir ou remover informacoes do cliente\n");
  //recebendo opcao do usuario
  printf("Digite a opcao: ");
  scanf("%d",&opcao);
      //opcoes do menu
      switch(opcao){
          case 1:
            printf("\n---------------------------------------\n");
          printf("Digite a quantidade de clientes que deseja cadastrar: ");
          scanf("%d",&quantidade);
          //chamando função para alocar a memória para a quantidade de cliente
          cliente=Memoria(quantidade,cliente);
          //chamando função para cadastrar
          Adicionar_cliente(cliente,quantidade);
          break;

          case 2:
              printf("\n---------------------------------------\n");
              Altera(cliente,quantidade);

          break;

      }//switch
}while(opcao!=5);
free(cliente);
  return 0;
}

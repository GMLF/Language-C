#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
char nome[100],endereco[100],data[10];
}Cadastro;

void Cadastra_cliente(FILE *adiciona,Cadastro *cliente){
  //abrindo arquivo no formato append, para dicionar apartir do ultimo elemento
  adiciona=fopen("5.txt","a+");

  if(adiciona==NULL){
    printf("erro ao abrir o aidiciona_clienteuivo\n");
    system("pause");
    exit(1);
  }//verificando se abriu o arquivo
else{
    setbuf(stdin,NULL);
    printf("Digite o nome do cliente: ");
    fgets(cliente->nome,99,stdin);
    setbuf(stdin,NULL);
    cliente->nome[strcspn(cliente->nome,"\n")]='\0';

    printf("Digite o endeco do cliente: ");
    fgets(cliente->endereco,99,stdin);
    setbuf(stdin,NULL);
    cliente->endereco[strcspn(cliente->endereco,"\n")]='\0';

    printf("Digite a data do cadastro: ");
    fgets(cliente->data,9,stdin);
    setbuf(stdin,NULL);
    cliente->data[strcspn(cliente->data,"\n")]='\0';

fwrite(cliente, sizeof(Cadastro), 1, adiciona);

}//else
 //fechando arquivo
 fclose(adiciona);
}//Cadastra_cliente;

void Altera_cadastro(FILE* altera, Cadastro *cliente){
int posicao=0;
char a[100];
 //abrindo o arquivo
 altera=fopen("5.txt","rb");
  //verificando
  if(altera==NULL){
    printf("Nao existem clientes cadastrados\n");
    exit(1);
  }else{
    printf("Digite a posicao do cliente a qual deseja alterar o cadastro: ");
    scanf("%d",&posicao);

    fseek(altera, posicao*sizeof(Cadastro), SEEK_SET);

    printf("Atualizando os dados\n");
    printf("Digite o novo nome do cliente: ");
    setbuf(stdin,NULL);
    fgets(cliente->nome,99,stdin);
    cliente->nome[strcspn(cliente->nome,"\n")]='\0';

    printf("Digite o novo endereco do cliente: ");
    setbuf(stdin,NULL);
    fgets(cliente->endereco,99,stdin);
    cliente->endereco[strcspn(cliente->endereco,"\n")]='\0';

    printf("Digite a data da atualizacao do cadastro: ");
    setbuf(stdin,NULL);
    fgets(cliente->data,99,stdin);
    cliente->data[strcspn(cliente->data,"\n")]='\0';

    fwrite(cliente, sizeof(Cadastro), 1, altera);

    while(!feof(altera)){
      fgets(a,99,altera);
      printf("%s",a);
    }
  }//else
fclose(altera);
}//Altera_cadastro

int main(){
  //Váriaveis
  Cadastro cliente;
  int opcao=0;
        FILE *arq;
printf("1 - Adicionar cliente\n2 - Alterar informacoes do cliente\n3 - Imprimir informacoes ou remover um cliente\n\nDigite sua opcao: ");
scanf("%d",&opcao);
  //opcao
  switch(opcao){
    //opcao 1
    case 1:
      Cadastra_cliente(arq,&cliente);
    break;
    //opcao 2
    case 2:
      Altera_cadastro(arq,&cliente);
    break;
    //opcao 3
    case 3:

    break;
    //default
    default:
    printf("opcao invalida\n");
    break;
  }//switch
}

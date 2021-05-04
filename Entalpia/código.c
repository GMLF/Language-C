#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[100];
  float energia;
}Reagentes;

typedef struct{
  char nome[100];
  float energia;
}Produtos;

Reagentes* Memoria(int tam){
    //Ponteiro para apontar pro espaço alocado
    Reagentes *p;
    //Alocando dinamicamenteo espaço para a quantidade de reagente
        p=malloc(tam*sizeof(Reagentes));
        //retornando o ponteiro que aponta pro local do espaço alocado
      return p;
}//Memoria

void Preenche_produto(Produtos *produto){
    setbuf(stdin,NULL);
      printf("Digite o nome do produto: ");
        fgets(produto->nome,99,stdin);
          produto->nome[strcspn(produto->nome,"\n")]='\0';

      printf("Digite a energia do produto: ");
        scanf("%f",&produto->energia);
  }//Preenche_produto

//Função recursiva para salvar os reagentes na struct
void Preenche_reagentes(Reagentes * reagente,int tam,int aux){
  if(aux==tam){
    return;
  }else{

      //limpando buffer
      setbuf(stdin,NULL);
        //pulando linha
        printf("\n");
          //solicitando o nome do reagente e salvando na struct
          printf("Digite o nome do [%d] reagente: ",aux+1);
            //limitando a quantidade de caracter
            fgets(reagente[aux].nome,99,stdin);
              //corrigindo o espaço para cracter nulo
              reagente[aux].nome[strcspn(reagente[aux].nome,"\n")]='\0';
                //limpando buffer
                setbuf(stdin,NULL);

        //solicitando a quantidade de energia e salvando na struct
        printf("Digite a energia do [%d] reagente: ",aux+1);
          scanf("%f",&reagente[aux].energia);
              //limpando buffer
              setbuf(stdin,NULL);
//chamando recursão
Preenche_reagentes(reagente,tam,aux+1);
    }//else
  }//Preenche_reagentes

float Entalpia_reagentes(Reagentes *aux,int tam){
        //váriavel para armazenar a entalpia dos reagentes
          float soma=0;
            //for para variar o índice
              for(int i=0;i<tam;i++){
                //calculando a entalpia dos reagente
                  soma+=aux[i].energia;
              }//for

          //retornando o seu respectivo valor para a main
          return soma;
  }//Entalpia_reagentes

float Calcula(int tam,Produtos *produto,float total_energia ){
          //váriavel auxiliar para o cálculo
          float resultado=0;
            //realizando o cálculo
            resultado=produto->energia-total_energia;
            //retornando o resultado
            return resultado;
  }//Calcula

void Escrevendo(FILE* escrita,float resultado){
  //criando o arquivo com o formato de escrita
  escrita=fopen("resultado.txt","w");
    //validação se o arquivo é nulo
    if(escrita==NULL){
      printf("OCorreu um erro na abertura\n");
        system("Pause");
          exit(1);
    }else{
        //escrevendo o resultado da entalpia em um arquivo
        fprintf(escrita,"%f",resultado);
      }//else
  //fechando o arquivo
  fclose(escrita);
}//Escrevendo

void Lendo(FILE *leitura){
  //váriavel auxiliar para a leitura
float aux=0;
  //criando o segundo arquivo com formato de leitura
  leitura=fopen("resultado.txt","r");
    //validação se o arquivo é nulo
    if(leitura==NULL){
      printf("OCorreu um erro na abertura\n");
        system("Pause");
          exit(1);
  }else{
    fscanf(leitura,"%f",&aux);
    if(aux>0){
      printf("\n");
      printf("A reacao e endotermica\n Ganhou energia\n valor da entalpia[%.2f]\n ",aux);
  }else if(aux<0){
    printf("\n");
    printf("A reacao e esotermica\n Perdeu energia\nvalor da entalpia [%.2f]\n",aux);
  }else{
    printf("\n");
    printf("A recao esta em equilibrio\n");
  }//else
}//else
//fechando o arquivo
fclose(leitura);
}//Lendo

int main(){
    //váriaveis
  int qtd_reagentes=0,aux2=0;
  float total_energia=0,resultado=0,aux=0;
    //informando quantidade de reagentes;
    printf("Digite a quantidade de reagentes: ");
    scanf("%d",&qtd_reagentes);
      printf("\n");
        //Váriavel da struct dos reagentes com ponteiro para alocar dinamicamente a memória
          Reagentes *elementos_reagentes;
              //Chamando a função para alocar dinamicamente a memória
              elementos_reagentes=Memoria(qtd_reagentes);
                //Struct dos produtos
                Produtos  elemento_produto;
                  //Chamando a função para preencher a struct produto
                  Preenche_produto(&elemento_produto);
                    //Chamando a função para preencher os produtos
                    Preenche_reagentes(elementos_reagentes,qtd_reagentes,aux2);
                      //Calculando a entalpia dos Reagentes e salvando o retorno em uma váriavel
                      total_energia=Entalpia_reagentes(elementos_reagentes,qtd_reagentes);
                      //Chamando função para calcular a entalpia geral
                      resultado=Calcula(qtd_reagentes,&elemento_produto,total_energia);
                      //abrindo o arquivo
                      FILE *escrita;
                    //Função que escreve no arquivo
                    Escrevendo(escrita,resultado);
                  //abrindo o arquivo
                  FILE *leitura;
                //Função que lê o arquivo
                Lendo(leitura);

 //liberando a memória para não ocorrer vazamento de memória
 free(elementos_reagentes);
//retornando que o código compilou sem erros.
return 0;
}//main

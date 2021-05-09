#include <stdlib.h>
#include <stdio.h>

//função aloca memória
float *Memoria(int tam){
  //ponteiro auxiliar que será retornado para main
  float *p;
      //alocando a memória
      p=(float*)malloc(tam*sizeof(float));
  //retornando ponteiro pra memória alocada
  return p;
}//memoria

//preenchendo o vetor
void Preenche(int tam, float vetor[]){
  //for que roda até o tamanho informado
  for(int i=0;i<tam;i++){
    printf("Digite o %d elemento do vetor: ",i+1);
    scanf("%f",&vetor[i]);
  }//for
}//Preenche

float Media(int tam,float vet[]){
  if(tam==1){
    return vet[0];
  }else {
    return (vet[tam-1] + Media(vet,tam);
  }//else
}//Media

int main(){
    //váriaveis
    int tam=0;
    float *vetor,resultado=0;

    printf("Tamanho do vetor: ");
    scanf("%d",&tam);

      //chamando função para alocar a memória
      vetor=Memoria(tam);
      //chamando função para preenche o vetor
      Preenche(tam,vetor);
      //chamando função para cálcular a média
      resultado=Media(tam,vet);

    free(vetor);
  return 0;
}

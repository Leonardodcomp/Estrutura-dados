// /Ajustar código de forma a exibir os dados na ordem dada pelo usuário.


#include <stdio.h>
#include <stdlib.h> //usado malloc
#include <string.h> //usado strcpy 
#include <ctype.h> //usado toupper

int main(){

 struct tipo{
	  char Palavra[20];
	  void *Prox; 
  };
  typedef struct tipo TIPO;
  
  TIPO *Inicio, *Auxiliar, *Atual;
  char P[20],R='S';

  Inicio = NULL;
  while (R=='S'){
    printf("\n > > > ORDENA PALAVRAS < < < \n");
    printf("\n Entrada atual:");
    Auxiliar=Inicio;                                    // reset
    while (Auxiliar!=NULL){
      printf(" %s ",Auxiliar->Palavra);                 // Printa tudo que já tem
      Auxiliar= Auxiliar->Prox;} 
    printf("\n\n Qual palavra deseja inserir? ");
    scanf(" %s",P);    
    Auxiliar=(TIPO *) malloc(sizeof(TIPO));
    strcpy(Auxiliar->Palavra,P);
    Auxiliar->Prox = NULL;

    if(Inicio == NULL){

      Inicio = Auxiliar;
      Atual = Auxiliar;
    }

    else{
      Atual->Prox = Auxiliar;
      Atual = Auxiliar;
    }

    // if (Inicio == NULL){ //primeiro elemento da estrutura
    //   Auxiliar->Prox=NULL;
    //   Inicio = Auxiliar;
    //   Fim = Auxiliar;}
    // else
    //   if (strcmp(P,Inicio->Palavra)<=0){ //insere no inicio
		// Auxiliar->Prox = Inicio;
		// Inicio = Auxiliar;}
	  // else
	  //   if (strcmp(P,Fim->Palavra)>=0){ //insere no fim


		  // Fim->Prox = Auxiliar;
		  // Fim = Auxiliar;

    // }
		// else{ //insere no meio - antes do primeiro maior
		//   Atual = Inicio->Prox;
		//   Anterior = Inicio;
		//   while (strcmp(Atual->Palavra,Auxiliar->Palavra)<0){
		//     Anterior = Atual;
		//     Atual = Atual->Prox;}
		//   Anterior->Prox = Auxiliar;
		//   Auxiliar->Prox = Atual;}

    printf("\n > > > ORDENA PALAVRAS < < < \n");
    printf("\n Palavras ordenadas: "); 
    Auxiliar=Inicio; 
    while (Auxiliar!=NULL){
      printf(" %s ",Auxiliar->Palavra);
      Auxiliar = Auxiliar->Prox;
      }
    printf("\n\n Digite S se deseja continuar: ");
    scanf(" %c",&R);
    R = toupper(R); }
    
    
    // liberando os espaços
    
    // Vamos usar o ponteiro Atual para fazer isso
    
    
    printf("Fim do codigo, ponteiros liberados");
    
    Atual = Inicio;
    TIPO *proximo;     // criando um ponteiro qualquer só pra salvar a informação do ponteiro que vai ser liberado
    
    while(Atual!=NULL){
        proximo = Atual->Prox;      // Guarda a info do proximo malloc
        free(Atual);                // Pronto, serviço completo
        Atual = proximo;
    }
    
    Inicio = NULL;
    Atual = NULL;                     // Todo mundo aterrado, bonitinho.
    
   return 0;
}
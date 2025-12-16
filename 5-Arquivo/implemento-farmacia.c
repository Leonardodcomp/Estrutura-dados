#include <stdio.h>
#include <stdlib.h>  //usado system
#include <ctype.h>   //usado toupper
#include <string.h>  //usado strcmp

struct TpFarma{
	char Nome[20];
	float Preco;
	int QEstoque;
  };
  
typedef struct TpFarma TpFARMA;

TpFARMA RgFarma;
  
FILE *ArqFarma;

long int Tamanho=20*sizeof(char)+sizeof(float)+sizeof(int);

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);}

void pausar() {
    printf("\nPressione ENTER para continuar...\n");
    limpar_buffer();  // Limpa qualquer lixo no buffer
    getchar();}       // Agora espera o ENTER}

void Incluir() {
  char R;
  do{
    system("clear");
    printf("*** inclusao ***\n\n");
    printf("Nome: ");
    scanf("%s",RgFarma.Nome);
    printf("Preco: ");
    scanf("%f",&RgFarma.Preco);
    printf("Estoque: ");
    scanf("%d",&RgFarma.QEstoque);
    fseek(ArqFarma,0,2);
    fwrite(&RgFarma,Tamanho,1,ArqFarma);
    printf("\nNova inclusao? S/N ");
    scanf(" %c",&R);
    R=toupper(R);}
  while (R!='N');
  return;}

void Excluir(){
}

long int TArquivo(){
	fseek(ArqFarma,0,2);
	long int R=ftell(ArqFarma)/Tamanho;
	return R;}
	
void Alterar(){
  if (TArquivo()!=0){
  fclose(ArqFarma);
  ArqFarma=fopen("Famacos.dat","r+b");
  system("clear");
  printf("*** alterar ***\n\n");  
  fseek(ArqFarma,0,0);
  printf("Qual farmaco? ");
  char Farmaco[20];
  scanf("%s",Farmaco);
  int Achou=0;
  do {
	fread(&RgFarma,Tamanho,1,ArqFarma);
	if (strcmp(RgFarma.Nome,Farmaco)==0){
	  Achou=1;	
	  printf("Nome: %s\n",RgFarma.Nome);
      printf("Valor: %f\n",RgFarma.Preco);
      printf("Estoque: %d\n",RgFarma.QEstoque);}}
  while (!feof(ArqFarma)&&(Achou==0));
  if (Achou==0)
    printf("Registro inexistente!"); 
  else{
    printf("Qual o novo preco? \n"); 
    scanf("%f",&RgFarma.Preco);
    printf("Qual a nova quantidade? \n");
    scanf("%d",&RgFarma.QEstoque);
    fseek(ArqFarma,-Tamanho,1);
    fwrite(&RgFarma,Tamanho,1,ArqFarma);
    printf("\nAlteracao efetuada com sucesso!\n");}
    pausar();} //system("pause");
  else{
    printf("\n\nArquivo Vazio.  Nao existem dados a alterar.");
    pausar();} //system("pause");}
  fclose(ArqFarma);
  ArqFarma=fopen("Famacos.dat","a+b");
  return;}

void Consultar() {
  if (TArquivo()==0){
      printf("\n\nArquivo Vazio.  Nao existem dados a consultar.");
      pausar();} //system("pause");}
  else{
  system("clear");
  printf("*** consulta ***\n\n");  
  fseek(ArqFarma,0,0);
  printf("Qual farmaco? ");
  char Farmaco[20];
  scanf("%s",Farmaco);
  int Achou=0;
  do {
	fread(&RgFarma,Tamanho,1,ArqFarma);
	if (strcmp(RgFarma.Nome,Farmaco)==0){
	  Achou=1;	
	  printf("Nome: %s\n",RgFarma.Nome);
      printf("Valor: %f\n",RgFarma.Preco);
      printf("Estoque: %d\n",RgFarma.QEstoque);}}
    while (!feof(ArqFarma)&&(Achou==0));
  if (Achou==0){
    printf("\nRegistro inexistente!");}  
  pausar();}//system("pause");
  return;}

void LTodos() {
  if (TArquivo()==0){
      printf("\n\nArquivo Vazio.  Nao existem dados a listar.");
      pausar();} //system("pause");}
  else{
  system("clear");
  printf("*** lista todos ***\n\n");  
  fseek(ArqFarma,0,0);
  do {
	fread(&RgFarma,Tamanho,1,ArqFarma);
	if (!feof(ArqFarma)){
	  printf("Nome: %s\n",RgFarma.Nome);
      printf("Valor: R$%.2f\n",RgFarma.Preco);
      printf("Estoque: %d\n",RgFarma.QEstoque);
      printf("***\n\n");}}
    while (!feof(ArqFarma));
    pausar();}//system("pause");
  return;}

int main(){
  ArqFarma=fopen("Famacos.dat","a+b");
  char Opcao;
  do{
	system("clear");
    printf("\n\n> > > Pague Pouco < < < \n\n");
    printf("Que deseja fazer? \n\n");
    printf("I - Incluir \n");  
    printf("E - Exluir \n");
    printf("A - Alterar \n");
    printf("C - Consultar \n");
    printf("T - Listar Todos \n");
    printf("S - Sair \n\n");
    printf("Opcao: ");
    scanf(" %c", &Opcao);
    Opcao=toupper(Opcao);
    switch (Opcao){
      case 'I': Incluir(); break;
      case 'E': Excluir(); break;
      case 'A': Alterar(); break;
      case 'C': Consultar(); break;
      case 'T': LTodos(); break;}}
  while (Opcao != 'S');
  fclose(ArqFarma);
  return 0;}
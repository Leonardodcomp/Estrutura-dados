// Escrever um programa em C para ler um número inteiro qualquer e classificá-lo como para o ímpar.

#include <stdio.h>

int main(){
    int numero;
    printf("Insira seu numero: \n");
    scanf("%d", &numero);
    if(numero%2 != 0) printf("O numero é impar\n");
    else return printf("O numero é par\n");

    return 0;

}
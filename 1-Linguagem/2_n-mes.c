//Escrever um programa em C para ler umnúmero inteiro qualquer e retornar a que mês do ano corresponde. Caso não haja correspondência, exibir mensagem de erro.

#include <stdio.h>

int main(){
    int dia;
    printf("Insira o mês correspondente: \n");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Março\n");
        break;    
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;

    default:
        printf("Mês inserido corretamente, o ano só tem 12 meses");
        break;
    }

    return 0;
}
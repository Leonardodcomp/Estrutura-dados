//Qual a ordem de complexidade de tempo do algoritmo dado abaixo?

#include <stdio.h>

int main(){
    float Distancia, Tempo;

    printf("Qual a distancia percorrida (em m)? ");
    scanf("%f",&Distancia);
    printf("Qual o intervalo de tempo (em s)? ");
    scanf("%f",&Tempo);
    printf("Resultado: %.2fm/s.\n",Distancia/Tempo);
return 0;}



// O(k) = 2, 1, 1, 1, 1, 1, 1+1 = 9 
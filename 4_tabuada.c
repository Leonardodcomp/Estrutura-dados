//Escrever um programa em C para ler um número n e exibir a tabuada de multiplicar de n (em forma tabular) de 0 a 10. Ao final da exibição, perguntar ao usuário se ele deseja obter a tabuada de outro número. deve ser exibida a tabuada de tantos números quantos o usuário desejar (uma por vez).


#include <stdio.h>

int main() {
    int mult;
    int count = 0;
    int op1, op2;
    while (1) {
        count = 0;
        printf("Infome o número que deseja fazer a tabuada\n");
        scanf("%d", &mult);
        while(1){
            printf("%d multiplicado por %d, é igual a %d\n",mult, count, mult * count);
            count++;
            printf("Continuar? 1 - Sim \n");
            scanf("%d",&op1);
            if (op1 != 1)
            break;}
        printf("Deseja saber a tabuada de um novo número? 1 - Sim\n");
        scanf("%d",&op2);
        if (op2 != 1)
        break;}

    return 0;
}
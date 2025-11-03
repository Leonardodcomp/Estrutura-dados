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
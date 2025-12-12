//Numa loja de departamento há 12vendedores e 5 seções (perfumaria,papelaria…). Os vendedores podem efetuarvendas em quaisquer seção. Esrever um programa em C para ler o total vendido por cada vendedor em cada seção e exibir o total por vendedor e o total de vendas da loja.

#include <stdio.h>

int main(){
    char *secoes[5] = {"Perfumaria", "Papelaria", "Eletronicos", "Vestuario", "Casa"};
    float vendaSolo[12][5];
    float total_vendedor[12] = {0};
    float total_loja = 0;


    for(int i=0;i<12;i++){
        printf("Vendedor %d\n", i+1);
        for(int j=0; j<5; j++){
            printf("Vendas na seção %s: ", secoes[j]);
            scanf("%f", &vendaSolo[i][j]);

            total_vendedor[i] += vendaSolo[i][j];
            total_loja += vendaSolo[i][j];
        }

    printf("\n");
    }

    for(int i=0; i<12; i++){
        printf("O total de vendas do vendedor %d foi de: %.2f\n", i+1, total_vendedor[i]);
    }
    printf("O total de vendadas da loja é: %.2f\n", total_loja);


    return 0;
}
    
    
//Escrever programa para ler uma string S com até 15 caracteres e um caractere C, e exibir a posição da primeira ocorrência de C em S. Exemplo, se dado ROSANA e A, exibir 4. IMPORTANTE: Para implementação desta não pode ser usada função predefinida de definição de primeira ocorrência de um caractere numa string.

#include <stdio.h>
#include <string.h>

int main(){
    char S[16];
    char C;
    int pos = -1;

    printf("Informe a palavra que deseja: ");
    scanf("%s", S);
    
    printf("Informe agora sua letra: ");
    scanf(" %c", &C);



    for (int i=0; i<16; i++){

        if(S[i] == C) {
            pos = i + 1; //Porque o 0 é contra intuitivo
            break;
        };
    };
    
    // implementando caso o usuário digitie uma letra que não existe para não exibir lixo
    
    if (pos != -1) printf("A letra %c aparece pela primeira vez na posição %d", C, pos);
    
    else printf("A letra %c não aparece na palavra %s", C, S);
        
        
    return 0;


    }
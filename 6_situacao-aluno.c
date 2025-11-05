//Escrever programa em C para ler nome, 3 notas e frequência dos 80 alunos do projeto “AprendaProgramação”, calcular a média desses (média da turma) e emitir em tela a situação final de cada aluno. São aprovados todos os que ficam com média (aritmética simples) acima da média da turma e têm frequência acima de 65%. Deve ser exibido o nome de cada aluno, seguido das notas, média e da situação final: APROVADO ou REPROVADO.

#include <stdio.h>

struct colegio{
    char nome[50];
    float nota[3];
    int frequencia;
    float media;
};

typedef struct colegio AprendaProgramacao;

int main(){
    AprendaProgramacao aluno [80];
    float somaMedia = 0, mediaTurma;

    for(int i = 0; i<80; i++){
        printf("\n \n Aluno %d \n", i+1);
        printf("Insira o nome do aluno: \n");
        scanf("%s", aluno[i].nome);

        for(int j = 0; j<3; j++){
            printf("Nota %d \n", j+1);
            scanf("%f", &aluno[i].nota[j]);
        };

        printf("Insira da frequencia do aluno %d \n", i+1);
        scanf("%d", &aluno[i].frequencia);


        aluno[i].media = (aluno[i].nota[1] + aluno[i].nota[2] + aluno[i].nota[3] )/ 3;

        printf("A media do aluno %d é de %f \n", i+1, aluno[i].media);


        somaMedia += aluno[i].media;

    };

    mediaTurma = somaMedia/80;

   for(int i = 0; i<80; i++){

    if(aluno[i].media>=mediaTurma) printf("aluno %d está aprovado \n", i+1);

    else printf("aluno %d está reprovado \n", i+1);

    };

    return 0;
};
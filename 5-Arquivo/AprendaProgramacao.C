//Escrever programa em C para cadastrar nome, 3 notas e frequência dos alunos do projeto“AprendaProgramação”. São três notas, e são aprovados todos os que ficam com média acima 7 e têm frequência acima de 65%. Deve haver opção para exibir o nome de cada aluno,seguido das notas, média e da situação final: APROVADO ou REPROVADO.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //usado strcmp

typedef struct {
    char nome [50];
    float nota[3]; 
    float freq;


} AprendaProg;

AprendaProg aluno;

FILE *curso;

void cadastarAluno(){
    curso = fopen("dadosAluno.dat", "a+b");
    printf("Vamos começar! \n");
    printf("Nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = 0;

    for (int i=0; i<3; i++){
        printf("Digite a nota %d: ", i+1);
        scanf(" %f", &aluno.nota[i]);
    }

    printf("Digite a frequequencia desse aluno");
    scanf("%f", &aluno.freq);

    fwrite(&aluno, sizeof(AprendaProg), 1, curso);

    fclose(curso);
}


int main (){
    cadastarAluno();
}

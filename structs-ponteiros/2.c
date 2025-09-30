#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

void preencherAlunos(Aluno *alunos){

    for(int i = 0; i < 5; i++){
        printf("\nInsira os dados do %dº aluno \n", i + 1);

        printf("\nNome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
}

float lerMediaAlunos(Aluno *alunos){

    float somatorio, media;

    for(int i = 0; i < 5; i++){
        somatorio += alunos[i].nota;
    }

    media = somatorio/5;
    return media;
}

int main(){

    Aluno alunos[5];
    preencherAlunos(alunos);
    printf("\n Média: %.2f \n", lerMediaAlunos(alunos));

    
    return 0;
}
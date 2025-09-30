#include <stdio.h>
#include <string.h>

typedef struct Pessoa{
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main(){
    Pessoa pessoa;

    printf("Insira o nome: ");
    scanf("%s", pessoa.nome);
    printf("Insira a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Insira a altura: ");
    scanf("%f", &pessoa.altura);

    printf("Nome: %s \n", pessoa.nome);
    printf("Idade: %d \n", pessoa.idade);
    printf("Altura: %.2f \n", pessoa.altura);
    
    return 0;
}
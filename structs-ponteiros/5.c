#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Funcionario{
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

Funcionario *lista;
int numFuncionarios;

void cadastrarFuncionarios(int numFuncionarios){
    for(int i = 0; i < numFuncionarios; i++){
        printf("\n %dº Funcionário:\n", i + 1);

        printf("\nNome: ");
        scanf(" %[^\n]", lista[i].nome);

        printf("Cargo: ");
        scanf(" %[^\n]", lista[i].cargo);

        printf("Salário: ");
        scanf("%f", &lista[i].salario);
    }
}

void exibirFuncionarios(int numFuncionarios){
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Nome: %s, Cargo: %s, Salário: R$%.2f\n", lista[i].nome, lista[i].cargo, lista[i].salario);
    }
}

int main(){

    printf("Insira o numero de funcionários a serem cadastrados: \n");
    scanf("%d", &numFuncionarios);

    lista = (Funcionario *)malloc(numFuncionarios * sizeof(Funcionario));
    if (lista == NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    cadastrarFuncionarios(numFuncionarios);
    exibirFuncionarios(numFuncionarios);

    free(lista);

    return 0;
}


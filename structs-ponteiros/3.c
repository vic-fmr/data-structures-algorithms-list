#include <stdio.h>
#include <string.h>

typedef struct Produto{
    char nome[30];
    int codigo;
    float preco;
} Produto;

void exibirDados(Produto produto){
    printf("\nProduto: %s", produto.nome);
    printf("\nCodigo: %d", produto.codigo);
    printf("\nPreco: %.2f \n", produto.preco);
}

int main(){
    Produto produto;

    printf("Insira o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Insira o codigo do produto: ");
    scanf("%d", &produto.codigo);
    printf("Insira o preco do produto: ");
    scanf("%f", &produto.preco);

    exibirDados(produto);

    return 0;
}
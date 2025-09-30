#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Carro{
    char modelo[30];
    int ano;
    float preco;
} Carro;

Carro* carro;

int main(){

    carro = malloc(sizeof(Carro));

    printf("Insira o nome do carro: ");
    scanf("%s", carro->modelo);
    printf("Insira o ano do carro: ");
    scanf("%d", &carro->ano);
    printf("Insira o preço do carro: ");
    scanf("%f", &carro->preco);

    printf("\nModelo: %s", carro->modelo);
    printf("\nAno: %d", carro->ano);
    printf("\nPreço: %.2f", carro->preco);

    free(carro);

    
    return 0;
}
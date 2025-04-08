#include <stdio.h>

int main() {
    int idade;
    float peso;
    char categoria_idade[20];
    char classificacao_peso[10];

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    printf("Digite o peso do atleta (kg): ");
    scanf("%f", &peso);

    // Classificação por idade
    if (idade >= 5 && idade <= 7) {
        sprintf(categoria_idade, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        sprintf(categoria_idade, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        sprintf(categoria_idade, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        sprintf(categoria_idade, "Juvenil B");
    } else if (idade >= 18) {
        sprintf(categoria_idade, "Sênior");
    } else {
        printf("Idade fora da faixa para classificação.\n");
        return 0;
    }

    // Classificação por peso
    if (peso <= 50) {
        sprintf(classificacao_peso, "Leve");
    } else if (peso <= 90) {
        sprintf(classificacao_peso, "Médio");
    } else {
        sprintf(classificacao_peso, "Pesado");
    }

    printf("Classificação: %s - %s\n", categoria_idade, classificacao_peso);

    return 0;
}

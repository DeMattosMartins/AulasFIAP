#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Entrada dos lados
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verificação de existência de triângulo
    if (lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1) {

        // Classificação do triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triângulo Equilátero (todos os lados iguais).\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triângulo Isósceles (dois lados iguais).\n");
        } else {
            printf("Triângulo Escaleno (todos os lados diferentes).\n");
        }

    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}

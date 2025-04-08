#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Verificação se é uma equação do 2º grau
    if (a == 0) {
        printf("Não é uma equação do segundo grau.\n");
        return 0;
    }

    // Cálculo do discriminante (delta)
    delta = b * b - 4 * a * c;

    // Verificações com base no valor de delta
    if (delta < 0) {
        printf("Não existe raiz real.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: X = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais:\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
    }

    // Mensagens adicionais (bônus)
    if (b == 0 && c == 0) {
        printf("Equação da forma: %.0fx² = 0\n", a);
    } else if (b == 0) {
        printf("Equação sem termo 'bx'.\n");
    } else if (c == 0) {
        printf("Equação sem termo 'c'.\n");
    }

    return 0;
}

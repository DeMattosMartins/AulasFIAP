#include <stdio.h>

int main() {
    float salario, valorEmprestimo, parcela;
    int numParcelas;

    printf("Digite o salário mensal: R$ ");
    scanf("%f", &salario);

    printf("Digite o valor total do empréstimo desejado: R$ ");
    scanf("%f", &valorEmprestimo);

    printf("Digite o número de parcelas: ");
    scanf("%d", &numParcelas);

    parcela = valorEmprestimo / numParcelas;
    float limite20 = salario * 0.20;
    float limite30 = salario * 0.30;

    printf("\nValor da parcela: R$ %.2f\n", parcela);

    if (parcela > limite30) {
        printf("Empréstimo NÃO CONCEDIDO: parcela excede 30%% do salário.\n");
    } else if (parcela > limite20) {
        char resposta;
        printf("Parcela entre 20%% e 30%% do salário.\nDeseja continuar com o empréstimo? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            printf("Empréstimo CONCEDIDO com ressalvas.\n");
        } else {
            printf("Empréstimo NÃO CONCEDIDO por decisão do usuário.\n");
        }
    } else {
        printf("Empréstimo CONCEDIDO automaticamente.\n");
    }
    return 0;
}
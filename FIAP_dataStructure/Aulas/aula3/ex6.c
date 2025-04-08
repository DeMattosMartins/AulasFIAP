#include <stdio.h>
#include <string.h>

int main() {
    float valor, imposto, valorFinal;
    char estado[3];
    char tipoCliente;
    
    // Entrada de dados
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    
    printf("Digite o estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estado);
    
    printf("Digite o tipo de cliente (F para Pessoa Física, J para Pessoa Jurídica): ");
    scanf(" %c", &tipoCliente); // espaço antes do %c ignora o enter anterior

    // Inicializa imposto com valor inválido
    imposto = -1;

    // Verifica estado e tipo de cliente para aplicar o imposto
    if (strcmp(estado, "MG") == 0) {
        imposto = (tipoCliente == 'F' || tipoCliente == 'f') ? 7 : 3.5;
    } else if (strcmp(estado, "SP") == 0) {
        imposto = (tipoCliente == 'F' || tipoCliente == 'f') ? 12 : 6;
    } else if (strcmp(estado, "RJ") == 0) {
        imposto = (tipoCliente == 'F' || tipoCliente == 'f') ? 15 : 7.5;
    } else if (strcmp(estado, "MS") == 0) {
        imposto = (tipoCliente == 'F' || tipoCliente == 'f') ? 8 : 4;
    } else {
        printf("Estado inválido!\n");
        return 0;
    }

    // Cálculo do valor final
    valorFinal = valor + (valor * (imposto / 100));

    // Saída formatada
    printf("\nValor original: R$ %.2f\n", valor);
    printf("Estado: %s\n", estado);
    printf("Cliente: %s\n", (tipoCliente == 'F' || tipoCliente == 'f') ? "Pessoa Física" : "Pessoa Jurídica");
    printf("Imposto aplicado: %.1f%%\n", imposto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}

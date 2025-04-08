#include <stdio.h>

int main() {
    int mes;

    // Entrada
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &mes);

    // Processamento e saída
    switch(mes) {
        case 1:
            printf("Janeiro – 31 dias\n");
            break;
        case 2:
            printf("Fevereiro – 28 ou 29 dias\n");
            break;
        case 3:
            printf("Março – 31 dias\n");
            break;
        case 4:
            printf("Abril – 30 dias\n");
            break;
        case 5:
            printf("Maio – 31 dias\n");
            break;
        case 6:
            printf("Junho – 30 dias\n");
            break;
        case 7:
            printf("Julho – 31 dias\n");
            break;
        case 8:
            printf("Agosto – 31 dias\n");
            break;
        case 9:
            printf("Setembro – 30 dias\n");
            break;
        case 10:
            printf("Outubro – 31 dias\n");
            break;
        case 11:
            printf("Novembro – 30 dias\n");
            break;
        case 12:
            printf("Dezembro – 31 dias\n");
            break;
        default:
            printf("Mês inválido!\n");
            break;
    }

    return 0;
}

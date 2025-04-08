//Exercício 8: Ganhador de Loteria - Distribuição PercentualUm prêmio de R$1.000.000,00 será dividido entre três ganhadores, seguindo a seguinte regra:
// O primeiro colocado recebe 50% do total.
// O segundo colocado recebe 30% do total.
// O terceiro colocado recebe o restante do prêmio.
// Além disso, o programa deve calcular quanto cada ganhador perderia caso houvesse um imposto de 20% sobre os ganhos.

#include <stdio.h>

int main(){

    float premio = 1000000;
    float primeiroColocado = premio*(50.0/100);
    float segundoColocado = premio*(30.0/100);
    float terceiroColocado = premio - primeiroColocado - segundoColocado;

    printf("Valor de cada ganhador:\nPrimeiro colocado: %.2f\nSegundo colocado: %.2f\nTerceiro colocado: %.2f\n\n", primeiroColocado, segundoColocado, terceiroColocado);

    float imposto = 20.0/100;
    float impostoPrimeiro = primeiroColocado*imposto;
    float impostoSegundo = segundoColocado*imposto;
    float impostoTerceiro = terceiroColocado*imposto;

    printf("Valor final após impostos:\nPrimeiro colocado: %.2f\nSegundo colocado: %.2f\nTerceiro colocado: %.2f\n\n", primeiroColocado - impostoPrimeiro, segundoColocado - impostoSegundo, terceiroColocado - impostoTerceiro);
    printf("Valor pago de imposto:\n Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n\n", impostoPrimeiro, impostoSegundo, impostoTerceiro);
    
}
 

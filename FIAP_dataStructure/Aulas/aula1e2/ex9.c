// Conversão de Temperatura. Faça um programa que leia uma temperatura em graus Celsius e exiba o valor correspondente em Fahrenheit e Kelvin.
#include <stdio.h>

int main(){
    float c;

    printf("Diga o valor em celsius: ");
    scanf("%f", &c);

    float kelvin = c + 273.15;
    float f = c*(9/5)+32;

    printf("Temperatura em kelvin: %.2f\nTemperatura em fahrenheit: %.2f", kelvin, f);
}

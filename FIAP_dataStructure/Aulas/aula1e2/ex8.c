// Média Ponderada. Faça um programa que leia três números reais e calcule a média ponderada desses números, considerando os pesos 2, 3 e 5 respectivamente.
//A fórmula da média ponderada é: M = (N1x2) + (N2x3) + (N3x5)/(2+3+5)
#include <stdio.h>

int main(){
    float num1, num2, num3;

    printf("Diga três numeros reais: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    float media = ((num1*2)+(num2*3)+(num3*5))/(2+3+5);
    printf("A media ponderada é: %.3f", media);

}
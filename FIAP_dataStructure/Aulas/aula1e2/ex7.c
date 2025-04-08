// Leitura e Impressão Invertida com Formatação. Escreva um programa que leia um valor de velocidade em km/h e converta para m/s usando a fórmula: M = K3,6

#include <stdio.h>

int main (){
    float velocidade;

    printf("Diga a velocidade em Km/h \n");
    scanf("%f", &velocidade);

    float m = velocidade/3.6;
    printf("A velocidade em metros por segundo é: %.2fm/s \n", m);
}
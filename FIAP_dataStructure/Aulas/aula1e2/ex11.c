//Escreva um programa que leia um valor peso e altura de uma pessoa e calcula o IMC dela usando a fórmula:
#include <stdio.h>

int main(){

    float peso, altura;
    printf("Diga o seu peso:");
    scanf("%f", &peso);

    printf("Diga a sua altura(em metros):");
    scanf("%f", &altura);

    float IMC = peso/(altura*altura);
    printf("O seu IMC é: %.2f\n", IMC);
}
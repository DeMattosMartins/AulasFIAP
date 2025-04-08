// Números Invertidos Escreva um programa que leia um número inteiro positivo de três dígitos e exiba o número formado pelos dígitos invertidos.
#include <stdio.h>

int main(){
    int num;

    printf("Diga um número de 3 digitos: ");
    scanf("%d", &num);


    int num3 = num / 100;
    int num2 = (num % 100)/10;
    int num1 = num % 10;

    printf("Número invertido: %d%d%d \n", num1, num2, num3);
}
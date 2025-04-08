#include <stdio.h>
// Sucessor, Antecessor e Dobro. Escreva um programa que leia um número inteiro e exiba o seu antecessor, sucessor e dobro.
int main(){

    int a, b, c, d;


    printf("Digite um numero: ");
    scanf("%d", &a);

    b = a-1;
    c = a+1;
    d = a*2;

    printf("Antecessor: %d\nSucessor:%d \nDobro: %d", b, c, d);

}

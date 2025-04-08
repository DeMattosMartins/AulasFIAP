//Exercício 2: Leitura e Impressão Invertida com Formatação
// Escreva um programa que:
// Leia dois números inteiros do usuário.
// Imprima os números lidos na ordem inversa à que foram digitados, separados por uma tabulação horizontal (\t).
// Use apenas um comando printf() para exibir os números invertidos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("Escreva dois numeros: ");
    scanf("%d %d",&num1,&num2);
    printf(" numeros de forma inversa: \t %d %d", num2, num1);

}

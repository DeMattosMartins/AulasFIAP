//Exercício 4: Caracteres e Valores Inteiros
// Elabore um programa que:
// Leia três caracteres do tipo char do usuário.
// Imprima cada caractere entre aspas duplas (") e, na mesma linha, seu valor inteiro correspondente (código ASCII), separados por dois pontos (:). Por exemplo, se o caractere for 'A', deve ser impresso "A":65.
// Use apenas um comando printf() para exibir todos os caracteres e seus valores inteiros.

#include <stdio.h>

int main(){

    char a, b, c;

    printf("Diga tres letras: ");
    scanf("%c %c %c", &a, &b, &c);

    printf("\"%c\": %d \n \"%c\": %d \n \"%c\": %d", a,a,b,b,c,c);

}

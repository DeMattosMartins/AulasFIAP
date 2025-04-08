//Exercício 1: Mensagens Formatadas com Constante
// Elabore um programa que:
// Defina uma constante do tipo float usando o comando #define com o valor 3.1415.
// Imprima as mensagens "Início do programa" e "Valor da constante: 3.1415" em duas linhas separadas, utilizando apenas um comando printf().
// No final, imprima a mensagem "Fim do programa".

#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

int main()
{
    printf("inicio do programa \n%f", pi);
    printf(" \nFim do programa.");
    return 0;
}

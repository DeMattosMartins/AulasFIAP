// Exercício 3: Manipulação de Tipos e Erros de Formatação
// Faça um programa que:
// Leia um número inteiro e um número do tipo float do usuário.
// Tente imprimir o número inteiro usando o operador %f e o número float usando o operador %d. Observe o comportamento do programa e explique o que aconteceu.
// Em seguida, imprima corretamente os valores lidos, separados por um espaço, usando os operadores adequados.


#include <stdio.h>

int main(){

    int inteiro;
    float decimal;

    printf("Numero inteiro e float.");
    scanf("%d %f", &inteiro, &decimal);

    printf("Seus numeros sao: ");
    printf("%f %d", decimal, inteiro);

}

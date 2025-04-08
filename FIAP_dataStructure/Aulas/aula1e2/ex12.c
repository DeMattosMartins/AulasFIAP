//Conversão de letra maiuscula para minúscula Faça um programa que converta uma letra maiuscula em letra minúscula. Use a tabela ASCII para isso.
#include <stdio.h>

int main(){ 
    char letra;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z') {
        letra = letra + 32;
        printf("Letra minúscula: %c\n", letra);
    } else {
        printf("O caractere digitado não é uma letra maiúscula.\n");
    }
}


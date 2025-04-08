//Exercício 5: Data Formatada e Impressão Variada
// Crie um programa que:
// Solicite ao usuário que insira o dia, mês e ano como valores inteiros.
// Imprima a data no formato dd/mm/aaaa usando barras (/) como separadores.
// Em seguida, imprima os valores do dia, mês e ano de três maneiras diferentes:
// Separados por espaços.
// Separados por uma tabulação horizontal (\t).
// Um em cada linha.
// Use apenas três comandos printf(), um para cada forma de impressão.

#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Diga a sua data de aniversario: ");
    scanf("%d/%d/%d",&dia, &mes, &ano);

    printf("%d %d %d\n", dia, mes, ano);
    printf("%d \t%d \t%d\n", dia, mes, ano);
    printf("%d\n%d\n%d", dia, mes, ano);

}

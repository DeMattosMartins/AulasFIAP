#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fibonacci(){

    int numero;
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50):\n");
    scanf("%d", &numero);
    unsigned long long fibArr[numero];

        for (int i = 0; i < numero; i++) {
        if (i == 0){
                fibArr[i] = 0;
        } else if (i == 1){
            fibArr[i] = 1;
        }
        else{
            fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
        }
}
        printf("Sequencia de fibonacci: \n");
        for(int m = 0; m < numero; m++){
            printf(" %llu", fibArr[m]);
        }
}
void fatoriais(){

        int quantidade;
        printf("Digite um número inteiro (1 a 20):");
        scanf("%d", &quantidade);
        unsigned long long nFatoriais[quantidade];

        for(int i = 0; i < quantidade; i++){
            if(i==0){
                nFatoriais[i] = 1;
            } else {
                nFatoriais[i] = nFatoriais[i-1]*(i+1);
            }
        }
        for(int z = 0; z < quantidade; z++){
                printf("%d! = %llu\n", z + 1, nFatoriais[z]);
        }
}
void palindromos(){
        char palavra[101], newPalavra[101];
        printf("Digite uma palavra: ");
        scanf("%s", palavra);

        int tamanho = strlen(palavra);

        for(int i = 0; i < tamanho; i++){
            newPalavra[i] = palavra[tamanho - 1 - i];
        }
        newPalavra[tamanho] = '\0';

        if(strcmp(palavra, newPalavra) == 0){
            printf("A palavra é um palíndromo.");
        } else {
            printf("A palavra NÃO é um palíndromo.");
        }

}
void subString(){
        char palavra[50], newPalavra[50];
        printf("Digite a primeira string: ");
        scanf(" %s", palavra);
        printf("Digite a segunda string: ");
        scanf(" %s", newPalavra);

    if (strstr(palavra, newPalavra) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}

int main()
{
        int exercicio;
        printf("===== MENU DE EXERCÍCIOS =====\n");
        printf("1 - Sequência de Fibonacci;\n");
        printf("2 - Fatoriais;\n");
        printf("3 - Verificar Palíndromo;\n");
        printf("4 - Verificar Substring.\n");
        scanf("%d", &exercicio);

        switch(exercicio){
        case(1):
            fibonacci();
            break;
        case(2):
            fatoriais();
            break;
        case(3):
            palindromos();
            break;
        case(4):
            subString();
            break;
        }
}

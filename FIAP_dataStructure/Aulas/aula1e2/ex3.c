#include <stdio.h>

int main(){

    int inteiro;
    float decimal;

    printf("Numero inteiro e float.");
    scanf("%d %f", &inteiro, &decimal);

    printf("Seus numeros sao: ");
    printf("%f %d", decimal, inteiro);

}

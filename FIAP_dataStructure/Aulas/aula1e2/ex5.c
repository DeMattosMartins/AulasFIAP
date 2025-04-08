#include <stdio.h>

int main(){

    int dia, mes, ano;

    printf("Diga a sua data de aniversario: ");
    scanf("%d/%d/%d",&dia, &mes, &ano);

    printf("%d %d %d\n", dia, mes, ano);
    printf("%d \t%d \t%d\n", dia, mes, ano);
    printf("%d\n%d\n%d", dia, mes, ano);

}

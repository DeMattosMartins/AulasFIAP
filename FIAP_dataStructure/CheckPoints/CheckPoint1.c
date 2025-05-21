#include <stdio.h>

int main (){

    char letra;

    printf("Escolha a letra da opção que deseja: \n");

    printf("A - Total de carbidrato por peso\n");
    printf("B - Quantidade de carboidrato em uma única colher de sopa de extrato de tomate\n");
    printf("C - Carboidratos totais com extrato de tomate e tomates.\n");
    printf("D - Quantidade de tomates (peso) necessário para fazer uma certa quantidade de extrato de tomate\n");

    scanf("%c", &letra);

    switch (letra)
    {
    case 'A':{        
        float quantidade;
        printf("Diga a quantidade de tomate.\n");
        scanf("%f", &quantidade);
        float carboidrato = (quantidade/100)*3.1;
        printf("Quantidade de carboidrato no saco de tomates: %.2fg.\n", carboidrato);
        break;
    }
    case 'B': {        
        printf("Quantidade de carboidrato em 1 colher de sopa (15g) de extrato de tomate: 2.00 g\n");
        break;
    }

    case 'C':{        
        float pesoTomate, pesoExtrato;
        printf("Diga os pesos dos tomates: \n");
        scanf("%f", &pesoTomate);
        printf("Diga os pesos do extrato: \n");
        scanf("%f", &pesoExtrato);

        float carboidratosTomate = ((pesoTomate/100)*3.1);
        float carboidratosExtrato = ((pesoExtrato/30)*4);
        float carboidratoTotais =  carboidratosTomate + carboidratosExtrato;

        printf("Total de carboidratos no molho: %.2f\n", carboidratoTotais);
        if (carboidratosTomate > carboidratosExtrato){
            printf("O tomate contribuiu mais com os carboidratos do molho.\n");
        } else{
            printf("O extrato de tomate contribuiu mais com os carboidratos do molho.\n");
        }
    }
        break;
    case 'D':{        
        float capacidade;
        printf("Diga a capacidade do recipiente em gramas: \n");
        scanf("%f", &capacidade);
        float quantidadeTomates = capacidade*6;
        printf("Serao necessarios aproximadamente %.2fg de tomates para fazer %.2fg de extrato artesanal.\n",quantidadeTomates, capacidade);
        break;
    }
    default:
        printf("Não foi inserida uma letra valida.\n");
        break;
    }
}

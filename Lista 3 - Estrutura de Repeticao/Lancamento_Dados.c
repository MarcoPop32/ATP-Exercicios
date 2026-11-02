#include <stdio.h>


int main(){
    int dado1 = 0, dado2 = 0, soma = 0, cont = 0; 

    printf("Todas as possibilidades da soma dos 2 dados serem igual a 7:\n ");
    for(dado1 = 1; dado1 <= 6; dado1++){
        for(dado2 = 1; dado2 <= 6; dado2++){
            if(dado1 + dado2 == 7){
                printf("\nDado 1: %d\nDado 2: %d\nSoma dos Dados: %d\n", dado1, dado2, dado1+dado2);
            }
        }
    }

    return 0;
}
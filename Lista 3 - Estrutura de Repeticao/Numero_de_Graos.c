#include <stdio.h>

int main(){
    unsigned long long graos = 1, soma = 0;

    for(int i = 1; i <= 64; i++){
        soma += graos;
        graos = graos*2;

    }

    printf("A quantidade total de grãos que o monge esperava receber é de: %llu\n", soma);
    return 0; 
}
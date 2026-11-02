#include <stdio.h>

int main() {
    int soma = 0;

    for(int i = 1; i <= 100; i++){
        soma += i;
    }
    printf("O valor da soma dos 100 números é igual a: %d", soma);


    return 0;
}
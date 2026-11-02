#include <stdio.h>

int main() {
    double produto = 1;
    for(int i = 1; i <= 100; i++){
        produto *= i;
    }
    printf("O valor do produto dos 100 números é igual a: %6lf", produto);


    return 0;
}
#include <stdio.h>

int main(){
    float n = 1;
    float soma = 0;

    for(int i = 1; i <= 50; i++){
        soma += n / i;
        n += 2;
    }

    printf("Somatório dos 50 termos: %.2f", soma);

    return 0;
}
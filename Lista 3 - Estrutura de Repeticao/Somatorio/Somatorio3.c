#include <stdio.h>

int main(){
    float n1 = 37, n2 = 38, soma = 0;

    for(int i = 1; i <= 37 ; i++){
        soma += (n1*n2) / i;
        n1--;
        n2--;
    }

    printf("Somatorio: %.4f", soma);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, soma = 0;
    int sinal = 1;

    for(int i = 1; i <= 15; i++){
        n1 = pow(2,i-1);
        n2 = pow(16 - i, 2);
        soma += sinal*(n1/ n2);
        sinal *= -1;
    }

    printf("Somatório: %.2f", soma);


    return 0; 
}
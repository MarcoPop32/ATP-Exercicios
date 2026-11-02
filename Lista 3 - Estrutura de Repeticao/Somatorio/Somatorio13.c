#include <stdio.h>

int main(){
    double n1 = 100;
    double n2 = 1; 
    double soma = 0;

    for(int i = 1; i <= 20; i++){
        soma += n1 / n2;
        n1 = 100 - i;
        n2 *= i;  
    }

    printf("Somatório: %.4f\n", soma);

    return 0;
}
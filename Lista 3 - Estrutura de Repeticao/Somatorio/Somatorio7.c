#include <stdio.h>
#include <math.h>

int main(){
    double n1 = 1, n2; 
    double sinal = 1;
    double soma = 0;
    double fatorial = 1;

    for(int i = 1; i <= 50; i++){

        n1 *= i;
        n2 = pow(2,i)-1;

        soma += (n1*sinal)/n2;

        sinal *= -1;
    }

    printf("Soma dos 50 termos: %.6f", soma);
    return 0; 
}
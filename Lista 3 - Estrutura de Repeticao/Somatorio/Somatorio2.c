#include <stdio.h>
#include <math.h>


int main(){ 
    double n = 2, soma = 0;

    for(int i = 1; i <= 50; i++){
        double denominador = 51 - i;
        soma += n / denominador;
        n *= 2;

    }

    printf("Somatório dos 50 termos: %.4f", soma); 

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    double x;
    double soma = 0;
    int sinal = 1;

    printf("Digite um valor para X: ");
    scanf("%lf", &x);

    for(int i = 1; i <= 25; i++){
        soma += sinal*(pow(x,26-i)) / i;
        sinal *= -1;
    }

    printf("O valor do somatório é igual a: %.4f", soma);


    return 0;
}
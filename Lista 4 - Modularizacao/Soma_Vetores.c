#include <stdio.h>

double somarVetor(double X[], int n){
    double soma = 0;

    for(int i = 0; i < n; i++){
        soma += X[i];
    }

    return soma;
}

int main(){
    double X[20];

    printf("Digite os 20 valores reais: ");
    
    for(int i = 0; i < 20; i++){
        scanf("%lf", &X[i]);
    }

    printf("Soma = %.2f\n", somarVetor(X, 20));

    return 0;
}
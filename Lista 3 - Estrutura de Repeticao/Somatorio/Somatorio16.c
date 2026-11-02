#include <stdio.h>
#include <math.h>


int main(){
    double x1, x2 = 1;
    
    int termos;


    printf("Digite o valor de X: ");
    scanf("%lf", &x1);

    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);

    double soma = x1;

    double numerador = x1*x1;

    int sinal = -1;

    int denominador = 1;

    for(int i = 2; i <= termos; i++){
        x2 *= (denominador+1)*(denominador+2);
        denominador += 2;

        double termo = sinal * (numerador / x2);
        soma += termo;

        numerador *= (x1*x1);


        sinal *= -1;
    }

    printf("Valor do somatório: %.4f", soma);


    return 0;
}
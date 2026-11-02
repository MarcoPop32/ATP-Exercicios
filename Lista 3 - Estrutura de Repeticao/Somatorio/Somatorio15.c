#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2 = 1, soma = 0;
    double numerador = 1;
    double termo;
    int i = 0;

    printf("Digite o valor de X: ");
    scanf("%lf", &x1);

    double valorExp = exp(x1);

    while(fabs(valorExp - soma) > 0.0001){
        termo = numerador / x2;
        soma += termo;
        i++;
        numerador *= x1;
        x2 *= i;
    }

    printf("Valor de x: %.f\n", x1);
    printf("Somatório: %.4f\n", soma);
    printf("Valor do exp: %.4f\n", valorExp);
    printf("Quantidade de termos: %d\n", i);

    return 0;
}
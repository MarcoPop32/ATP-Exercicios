#include <stdio.h>
#include <math.h>


int main(){
    double x1, x2 = 1;
    int sinal = -1;

    printf("Digite o valor de X: ");
    scanf("%lf", &x1);

    double numerador = x1*x1;

    double soma = 1;

    double denominador = 0;

    for(int i = 1; i <= 20; i++){
        x2 *= (denominador+1)*(denominador+2);
        denominador += 2;

        double termo = sinal * (numerador / x2);
        soma += termo;

        numerador *= (x1*x1);

        sinal *= -1;
    }

    double valorCos = cos(x1);
    double diferenca = fabs(soma-valorCos);

    printf("Valor do somatório: %.5f\n", soma);
    printf("Função Cos: %.5f\n", valorCos);
    printf("Valor da diferença da soma e função cos(x): %.5f\n", diferenca);



    return 0;
}
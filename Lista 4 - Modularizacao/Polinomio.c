#include <stdio.h>

double polinomio(int ordem, double x[], double n);

double derivada(int ordem, double x[], double n);


int main(){
    double a[21], x;
    int ordem, q;

    printf("Ordem do Polinomio: ");
    scanf("%d", &ordem); 

    if(ordem < 0 || ordem > 20){
        printf("Ordem invalida!\n");
        return 0;
    }
    printf("Digite os %d coeficientes do polinomio: ", ordem + 1);

    for(int i = 0; i < ordem; i++){
        scanf("%lf", &a[i]);
    }

    printf("Quantos valores de x deseja calcular? ");
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        printf("Digite o valor de x: ");
        scanf("%lf", &x);
        printf(" x = %.2lf, P(x) = %.4lf, P'(x) = %.4lf\n", x, polinomio(ordem, a, x), derivada(ordem, a, x));
    }
    return 0;
}

double polinomio(int ordem, double a[], double n){
    double p = a[0];
    for(int i = 1; i <= ordem; i++){
        p = p * n + a[i];
    }
    return p;
}

double derivada(int ordem, double a[], double n){
    double p = a[0], d = 0;
    for(int i = 1; i <= ordem; i++){
        d = d * n + p;
        p = p * n + a[i];
    }
    return d;
}
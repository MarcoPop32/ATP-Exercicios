#include <stdio.h>

double potencia(double base, int exp){
    if(exp == 0){
        return 1;
    }
    if(exp < 0){
        return 1.0 / potencia(base, -exp);
    }
    return base * potencia(base, exp - 1);
}

int main(){
    double base;
    int exp;

    printf("Base e expoente inteiro: ");
    scanf("%lf %d", &base, &exp);
    printf("%.2f ^ %d = %.4f\n", base, exp, potencia(base, exp));
    return 0;
}
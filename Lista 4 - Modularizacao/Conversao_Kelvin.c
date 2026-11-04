#include <stdio.h>


int conversaoKelvin(double k, double *f){
    if(k < 0){
        return 0;
    }
    *f = 32 + (k-32) * 18.0/10.0;
    return 1;
}

int main(){
    double k, f;

    printf("Digite a temperatura em Kelvin (°K): ");
    scanf("%lf", &k);

    if(conversaoKelvin(k, &f)){
        printf("%.2f°K = %.2f°F\n", k, f);
    }else{
        printf("Não foi possível converter (Kelvin negativo).\n");
    }

    return 0;
}
#include <stdio.h>


double polegadasparaCM(double pol){
    return pol * 2.54;
}

int main(){
    double p;

    printf("Digite o valor de polegadas para converter em centímetros (cm): ");
    scanf("%lf", &p);

    printf("%.2f em centímetros é igual a: %.4fcm\n", p, polegadasparaCM(p));

    return 0;
}
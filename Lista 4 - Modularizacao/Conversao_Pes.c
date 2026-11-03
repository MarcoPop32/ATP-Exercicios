#include <stdio.h>

double pesparaMetros(double feet){
    return feet / 3.281;
}

int main(){
    double feet;

    printf("Pes: ");
    scanf("%lf", &feet);

    printf("%.2f Pes em centímetros: %.4fcm\n", feet, pesparaMetros(feet));

    return 0;
}
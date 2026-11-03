#include <stdio.h>

#define PI 3.14159


double grausparaRadianos(double grad){
    return grad * PI / 180.0;
}

int main(){
    double g;

    printf("Graus: ");
    scanf("%lf", &g);
    printf("%.4f rad\n", grausparaRadianos(g));

    return 0;
}
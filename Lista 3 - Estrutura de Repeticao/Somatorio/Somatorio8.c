#include <stdio.h>
#include <math.h>

int main(){
    float a, senA;

    printf("Ângulo a\tSen(A)\n");
    for(int i = 1; i <= 63; i++){
        a = i * 0.1f;
        senA = a - (pow(a,3)/6) + (pow(a,5)/120) - (pow(a,7)/5040);
        printf("%.1f\t%.4f\n", a, senA);
    }

    return 0;
}
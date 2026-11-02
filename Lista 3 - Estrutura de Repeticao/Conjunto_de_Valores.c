#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("Digite um valor para X: ");
    scanf("%f", &x);

    while(x >= 0){
        y = 2.5*cos(fabs(x/2));
        printf("Y = 2.5 * cos(|%.2f/2|) = 2.5 * cos(%.2f) = %.4f\n", x, fabs(x/2), y);

        printf("Digite um valor de X para calcular Y: ");
        scanf("%f", &x);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int baskara(double a, double b, double c, double *x1, double *x2){
    double delta;
    
    if(a == 0){
        return -1;
    }

    delta = b * b - 4 * a * c;

    if(delta < 0){
        return 0;
    }
    if(delta == 0){
        *x1 = *x2 = -b / (2*a);
        return 1;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

}

int main(){
    double a, b, c, x1, x2;
    int n;

    printf("Digite os coeficientes de a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    n = baskara(a, b, c, &x1, &x2);

    if(n == -1){
        printf("O valor de a não pode ser zero!.\n");
    }else if(n == 0){
        printf("A equação não possui raízes reais!\n");
    }else if(n == 1){
        printf("X1 = X2 = %.4f\n", x1);
    }else{
        printf("X1 = %.4f | X2 = %.4f\n", x1, x2);
    }

    return 0;
}
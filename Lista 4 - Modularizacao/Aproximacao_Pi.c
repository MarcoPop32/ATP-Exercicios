#include <stdio.h>
#include <math.h>

double aproximacao(int termos){
    double s = 0, den, t;

    for(int i = 0; i < termos; i++){
        den = 2 * i + 1;
        t = 1.0 / (den*den*den);
        s += (i % 2 == 0) ? t : -t;
    }
    return pow(32*s,1.0/3.0);
}

int main(){
    int n;

    printf("Valor de n (termos): ");
    scanf("%d", &n);
    printf("Termos | PI aproximado\n");
    for(int i = 1; i <= n; i++){
        printf("%6d | %.8f\n", i, aproximacao(i));
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

#define MAXV 50

double distanciaVetor(double X[], double Y[], int n){
    double soma = 0.0;

    for(int i = 0; i < n; i++){
        soma += pow(X[i] - Y[i], 2);
    }
    return sqrt(soma);
}

int main(){
    double X[MAXV], Y[MAXV];
    int n, m;

    printf("Tamanho do vetor (%d max): ", MAXV);
    scanf("%d", &n);
    printf("Quantos pares (M)? ");
    scanf("%d", &m);

    if(n < 1 || n > MAXV){
        printf("Tamanho do vetor invalido!\n");
        return 0;
    }

    for(int i = 0; i < m; i++){
        printf("Par %d - vetor X: ", i + 1);

        for(int j = 0; j < n; j++){
            scanf("%lf", &X[j]);
        }
        printf("Par %d - vetor Y: ", i + 1);
        for(int j = 0; j < n; j++){
            scanf("%lf", &Y[j]);
        }
        printf("Distancia: %.4lf\n", distanciaVetor(X, Y, n));
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void preencheVetor(double v[], int n){
    for(int i = 0; i < n; i++){
        v[i] = (rand() % 2000 - 500) / 10.0;
    }
}

void mostrarVetor(const char *titulo, double v[], int n){
    printf("%s:", titulo);

    for(int i = 0; i < n; i++){
        printf(" %.1f", v[i]);
    }
    printf("\n");
}

void ordemCrescente(double A[], int n){
    double t;

    for(int i = 0; i < n-1-i; i++){
        for(int j = 0; j < n-1; j++){
            if(A[j] > A[j+1]){
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
}

int main(){
    double A[50];

    srand((unsigned)time(NULL));

    preencheVetor(A, 50);

    mostrarVetor("Antes", A, 50);

    ordemCrescente(A, 50);

    mostrarVetor("Depois", A, 50);

    return 0;
}
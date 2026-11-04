#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int v[], int n, int min, int max){
    for(int i = 0; i < n; i++){
        v[i] = min + rand() % (max - min + 1);
    }
}

void mostrarVetor(const char *titulo, int v[], int n){
    printf("%s: ", titulo);

    for(int i = 0; i < n; i++){
        printf(" %d", v[i]);
    }
    printf("\n");
}

int separarParesImpares(int X[], int n, int A[], int B[]){
    int nA = 0, nB = 0;

    for(int i = 0; i < n; i++){
        if(X[i] % 2 == 0){
            A[nA++] = X[i];
        }else{
            B[nB++] = X[i];
        }
    }
    return nA;
}

int main(){
    int X[30], A[30], B[30], nA;

    srand((unsigned)time(NULL));

    preencherVetor(X, 30, 1, 99);

    nA = separarParesImpares(X, 30, A, B);

    mostrarVetor("X", X, 30);
    mostrarVetor("A(pares)", A, nA);
    mostrarVetor("B (impares)", B, 30 - nA);

    return 0;
}
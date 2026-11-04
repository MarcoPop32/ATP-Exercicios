#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int v[], int n, int min, int max){
    for(int i = 0; i < n; i++){
        v[i] = min + + rand() % (max - min + 1);
    }
}

void mostrarVetor(const char *titulo, int v[], int n){
    printf("%s: ", titulo);

    for(int i = 0; i < n; i++){
        printf(" %d", v[i]);
    }
    printf("\n");
}

void zerarNegativo(int A[], int n){
    for(int i = 0; i < n; i++){
        if(A[i] < 0){
            A[i] = 0;
        }
    }
}

int main(){
    int A[25];
    srand((unsigned)time(NULL));

    preencherVetor(A, 25, -20, 20);
    mostrarVetor("Antes", A, 25);
    zerarNegativo(A, 25);
    mostrarVetor("Depois", A, 25);

    return 0;
}
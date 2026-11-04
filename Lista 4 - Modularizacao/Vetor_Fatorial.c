#include <stdio.h>

long long fatorial(int n){
    long long f = 1;

    if(n < 0 || n > 20){
        return -1;
    }
    for(int i = 2; i <= n; i++){
        f *= i;
    }
    return f;
}

void fatoriais(int A[], long long B[], int n){
    for(int i = 0; i < n; i++){
        B[i] = fatorial(A[i]);
    }
}

int main(){
    int A[10];
    long long B[10];

    printf("Digite os valores de A (0 a 20): ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }
    fatoriais(A, B, 10);

    printf("A: ");
    for(int i = 0; i < 10; i++){
        printf(" %d", A[i]);
    }

    printf("\nB: ");
    for(int i = 0; i < 10; i++){
        printf(" %lld", B[i]);
    }
    printf("\n");

    return 0;
}
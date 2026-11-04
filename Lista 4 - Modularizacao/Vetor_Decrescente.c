#include <stdio.h>


void decrescente(int A[], int B[], int n, int C[]){
    int t;
    for(int i = 0; i < n; i++){
        C[i] = A[i];
        C[n + i] = B[i];
    }

    for(int i = 0; i < 2 * n - 1; i++){
        for(int j = 0; j < 2 * n - 1 - i; j++){
            if(C[j] < C[j+1]){
                t = C[j];
                C[j] = C[j+1];
                C[j+1] = t;
            }
        }
    }
}

int main(){
    int A[10], B[10], C[20];

    printf("Digite os 10 valores de A: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 valores de B: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    decrescente(A, B, 10, C);

    printf("C: ");
    for(int i = 0; i < 20; i++){
        printf(" %d", C[i]);
    }
    printf("\n");

    return 0;
}
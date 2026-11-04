#include <stdio.h>

int pertence(int x, int v[], int n){
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            return 1;
        }
    }
    return 0;
}

int uniao(int A[], int nA, int B[], int nB, int C[]){
    int nC = 0;

    for(int i = 0; i < nA; i++){
        if(!pertence(A[i], C, nC)){
            C[nC++] = A[i];
        }
    }
    for(int i = 0; i < nB; i++){
        if(!pertence(B[i], C, nC)){
            C[nC++] = B[i];
        }
    }

    return nC;
}

int main(){
    int A[10], B[10], C[20], nC;

    printf("Digite os 10 valores de A: ");

    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite os 10 valores de B: ");

    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    nC = uniao(A, 10, B, 10, C);

    for(int i = 0; i < nC; i++){
        printf(" %d", C[i]);
    }
    printf("\n");

    return 0;

}
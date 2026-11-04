#include <stdio.h>

void somatorios(int A[], int B[], int n){
    int k, soma;

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 1; j <= A[i]; j++){
            soma += k;
        }
        B[i] = soma;
    }
}

int main(){
    int A[15], B[15];

    printf("Digite os 15 valores de A: ");
    for(int i = 0; i < 15; i++){
        scanf("%d", &A[i]);
    }

    somatorios(A, B, 15);
    printf("A: ");

    for(int i = 0; i < 15; i++){
        printf(" %d", A[i]);
    }

    printf("\nB: ");
    
    for(int i = 0; i < 15; i++){
        printf(" %d", B[i]);
    }

    printf("\n");

    return 0;

}
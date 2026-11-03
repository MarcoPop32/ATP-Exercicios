#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMCONJ 100
#define PARES 50

int pertence(char c, char v[], int n){
    for(int i = 0; i < n; i++){
        if(v[i] == c){
            return 1;
        }
    }
    return 0;
}

int interseccao(char A[], int nA, char B[], int nB, char C[]){
    int nC = 0;
    for(int i = 0; i < nA; i++){
        if(pertence(A[i], B, nB) && !pertence(A[i], C, nC)){
            C[nC++] = A[i];
        }
    }
    return nC;
}

int uniao(char A[], int nA, char B[], int nB, char C[]){
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
    char A[TAMCONJ + 1], B[TAMCONJ + 1], C[2* TAMCONJ + 1];
    int nC;

    for(int i = 0; i < PARES; i++){
        printf("Par %d - Conjunto A (ate %d caracteres, sem espaço): ", i + 1, TAMCONJ);
        scanf("%100s", A);
        printf("Par %d - Conjunto B: ", i + 1);
        scanf("%100s", B);
        
        nC = interseccao(A, (int)strlen(A), B, (int)strlen(B), C);
        C[nC] = '\0';
        printf(" Interseccao: %s\n", C);
        
        nC = uniao(A, (int)strlen(A), B, (int)strlen(B), C);
        C[nC] = '\0';
        printf(" Uniao: %s\n", C);

    }
    return 0;
}
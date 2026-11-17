#include <stdio.h>

#define N 11

void lerVetor(int v[], int n);
void mostrarVetor(int v[], int n);
int formato(int A[], int n);
void ordenar(int A[], int n, int B[]);

int main(){
    int A[N], B[N];

    printf("Digite 11 valores (crescentes até o 6° e decrescente depois):\n");
    
    lerVetor(A, N);
    
    if(!formato(A,N)){
        printf("O vetor não tem o formato pedido.\n");
        return 0;
    }

    ordenar(A, N, B);

    mostrarVetor(B, N);
}

void lerVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
}

void mostrarVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf(" %d", v[i]);
    }
}

int formato(int A[], int n){
    int meio = n / 2;

    for(int i = 0; i < meio; i++){ //Parte Crescente
        if(!(A[i] < A[i+1])){
            return 0;
        }
    }
    for(int i = meio; i < n - 1; i++){ //Parte Decrescente
        if(!A[i] > A[i+1]){
            return 0;
        }
    }
    return 1;
}

void ordenar(int A[], int n, int B[]){
    int meio = n / 2;
    int i = 0, j = n-1, k = 0;

    while(i <= meio && j > meio){
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j--];
        }
    }

    while(i <= meio){
        B[k++] = A[i++];
    }
    while(j > meio){
        B[k++] = A[j--];
    }
}
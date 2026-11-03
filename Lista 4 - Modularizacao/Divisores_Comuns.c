#include <stdio.h>

#define PARES 30

int divisores(int n, int d[]){
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            d[cont++] = i;
        }
    }
    return cont;
}

int pertenceInt(int x, int v[], int n){
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            return 1;
        }
    }
    return 0;
}

int interseccaoInt(int A[], int nA, int B[], int nB, int C[]){
    int nC = 0;

    for(int i = 0; i < nA; i++){
        if(pertenceInt(A[i], B, nB) && !pertenceInt(A[i], C, nC)){
            C[nC++] = A[i];
        }
    }
    return nC;
}

int main(){
    int x, y, dx[200], dy[200], dc[200], nx, ny, nc;

    for(int i = 0; i < PARES; i++){
        do{
            printf("Par %d: ", i + 1);
            scanf("%d %d", &x, &y);
        }while(x < 1 || x > 100000 || y < 1 || y > 100000);
        nx = divisores(x, dx);
        ny = divisores(y, dy);
        nc = interseccaoInt(dx, nx, dy, ny, dc);
        printf(" %d e %d -> divisores comuns: ", x, y);
        for(int j = 0; j < nc; j++){
            printf(" %d", dc[j]);
        }
        printf("\n");
    }
    return 0;
}
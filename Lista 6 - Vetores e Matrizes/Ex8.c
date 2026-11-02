#include <stdio.h>

#define L 4
#define C 5

int soma(int v[], int n){
    if(n == 0){
        return 0;
    }
    return v[n - 1] + soma(v, n - 1);
}

int somaMat(int m[][C], int l){
    if(l == 0){
        return 0;
    }
    return soma(m[l - 1], C) + somaMat(m, l - 1);
}

void lerMatriz(int m[][C], int l){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < C; j++){
            printf("m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

int somaIterativa(int m[][C], int l){
    int total = 0;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < C; j++){
            total += m[i][j];
        }
    }
    return total;
}


int main(){
    int m[L][C];
    int r, it;

    lerMatriz(m, L);
    r = somaMat(m, L);
    it = somaIterativa(m, L);

    printf("\nSoma recursiva: %d\n", r);
    printf("\nSoma iterativa: %d\n", it);
    printf(r == it ? "Os resultados são iguais!\n" : "Os resultados são diferentes!\n");
    
    return 0;
}
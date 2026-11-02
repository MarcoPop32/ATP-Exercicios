#include <stdio.h>

int busca(int v[], int ini, int fim, int x){
    if(ini > fim){
        return -1;
    }
    int meio = ini + (fim - ini) / 2;

    if(v[meio] == x){
        return meio;
    }

    if(x < v[meio]){
        return busca(v, ini, meio - 1, x);
    }
    return busca(v, meio + 1, fim, x);
}

int main(){
    int v[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};

    printf("busca(v, 0, 9, 23) = %d\n", busca(v, 0, 9, 23));
    printf("busca(v, 0, 9, 10) = %d\n", busca(v, 0, 9, 10));
}
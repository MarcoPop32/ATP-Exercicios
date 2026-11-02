#include <stdio.h>

int ordenado(int v[], int n){
    if(n <= 1){
        return 1;
    }
    if(v[n-2] > v[n-1]){
        return 0;
    }
    return ordenado(v, n - 1);
}

int main(){
    int v[] = {1, 3, 3, 8};

    printf("Ordem (1, 3, 3, 8): %d\n", ordenado(v, 4));
}
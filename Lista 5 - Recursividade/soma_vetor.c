#include <stdio.h>

int somaVetor(int v[], int n){
    if(n == 0){
        return 0;
    }
    return v[n - 1] + somaVetor(v, n - 1);
}

int main(){
    int v[] = {7, 3, 9, 1, 5};
    printf("Soma dos vetores (7,3,9,1,5): %d\n", somaVetor(v, 5));
}
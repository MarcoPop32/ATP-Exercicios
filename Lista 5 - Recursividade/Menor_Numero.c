#include <stdio.h>

int menor(int v[], int n){
    if(n == 1){
        return v[0];
    }
    int m = menor(v, n-1);
    return (v[n-1] < m) ? v[n-1] : m;
}

int main(){
    int v[] = {7, 3, 9, 1, 5};
    printf("Menor número (7, 3, 9, 1, 5): %d\n", menor(v,5));
}
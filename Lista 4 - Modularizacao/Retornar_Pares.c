#include <stdio.h>


int contarPares(int X[], int n){
    int cont = 0;

    for(int i = 0; i < n; i++){
        if(X[i] % 2 == 0){
            cont++;
        } 
    }
    return cont;
}

int main(){
    int X[15];

    printf("Digite os 15 valores de X: ");
    for(int i = 0; i < 15; i++){
        scanf("%d", &X[i]);
    }
    printf("Quantidade de números pares: %d\n", contarPares(X, 15));

    return 0;
}
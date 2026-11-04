#include <stdio.h>

int primo(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void gerarPrimos(int X[], int n){
    int achados = 0, num = 101;
    while(achados < n){
        if(primo(num)){
            X[achados++] = num;
        }
        num++;
    }
}

int main(){
    int X[10];

    gerarPrimos(X, 10);

    printf("Os 10 primeiros primos acima de 100: ");
    for(int i = 0; i < 10; i++){
        printf(" %d", X[i]);
    }
    printf("\n");

    return 0;
}
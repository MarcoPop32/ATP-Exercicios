#include <stdio.h>

void regressividade(int n){
    if (n <= 0){
        return;
    }
    printf("%d", n);
    regressividade(n - 1);
}

int main(){
    printf("Contagem regressiva: ");
    regressividade(5);
    printf("\n");
}
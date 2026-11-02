#include <stdio.h>

void crescente(int n){
    if (n <= 0){
        return;
    }
    crescente(n - 1);
    printf("%d", n);
}

int main(){
    printf("Contagem crescente: ");
    crescente(5);
    printf("\n");
}
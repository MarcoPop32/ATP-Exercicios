#include <stdio.h>

int contador(int n){
    if(n < 10){
        return 1;
    }
    return 1 + contador(n / 10);
}

int main(){
    printf("Contagem(12345): %d\n", contador(12345));
    printf("Contagem(0): %d\n", contador(0));
    printf("Contagem(10): %d\n", contador(10));
}
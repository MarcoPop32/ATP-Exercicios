#include <stdio.h>

void inverteNumero(int n){
    if(n < 10){
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    inverteNumero(n / 10);
}

int main(){
    printf("inverteNumero(12345): ");
    inverteNumero(12345);
    printf("\n");

    printf("inverteNumero(100): ");
    inverteNumero(100);
    printf("\n");
}
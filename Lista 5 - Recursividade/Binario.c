#include <stdio.h>

void binario(int n){
    if(n > 1){
        binario(n / 2);
    }
    printf("%d", n % 2); 
}

int main(){
    printf("Binario(13): ");
    binario(13);
    printf("\n");

    printf("Binario(1324): ");
    binario(1324);
    printf("\n");
}
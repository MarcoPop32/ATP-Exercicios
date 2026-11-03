#include <stdio.h>

int maior(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);

    printf("O maior valor é: %d", maior(a,b));

    return 0;
}
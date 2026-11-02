#include <stdio.h>

int main(){
    int n, maior = 0, menor = 999;

    for(int i = 1; i <= 3; i++){
        printf("Digite um número: ");
        scanf("%d", &n);

        if(n > maior){
            maior = n;
        }
    }
    printf("O maior número digitado é: %d", maior);

    return 0;
}
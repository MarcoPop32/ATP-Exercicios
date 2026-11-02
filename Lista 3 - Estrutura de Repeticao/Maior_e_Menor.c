#include <stdio.h>

int main(){
    int n, maior = 0, menor = 999;

    for(int i = 1; i <= 50; i++){
        printf("Digite um número: ");
        scanf("%d", &n);

        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }
    }

    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d", menor);

    return 0;
}
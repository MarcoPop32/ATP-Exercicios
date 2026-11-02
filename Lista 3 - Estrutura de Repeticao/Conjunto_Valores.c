#include <stdio.h>

int main(){
    int n, maior = 0, menor = 999;

    do{
        printf("Digite um número (-1 para sair): ");
        scanf("%d", &n);

        if(n != -1){
            if(n > maior){
                 maior = n;
                }
            if(n < menor){
                 menor = n;
                }
    }

    }while(n != -1);

    printf("\nO maior número digitado é: %d\n", maior);
    printf("\nO menor número digitado é: %d\n", menor);

    return 0;
}
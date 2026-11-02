#include <stdio.h>

int main(){
    int n1, n2, produto = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("O produto entre os 2 números é igual a: ");

    while(n1 >= 1){
        if(n1 % 2 != 0){
            produto += n2;
        }
        n1 /= 2;
        n2 *= 2;
    }
    printf("%d", produto);

    return 0;
}
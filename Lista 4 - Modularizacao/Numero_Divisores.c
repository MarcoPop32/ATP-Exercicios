#include <stdio.h>

int numDivisores(int n){
    int cont = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(n < 1){
        printf("Valor inválido.\n");
        return 0;
    }

    printf("%d tem %d divisores.\n", n, numDivisores(n));

    return 0;
}
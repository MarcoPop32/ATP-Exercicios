#include <stdio.h>
#include <stdbool.h>

bool perfeito(int n){
    int soma = 0;
    
    if(n < 2){
        return false;
    }

    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    return soma == n;
}

int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(perfeito(n)){
        printf("%d é um número perfeito.\n", n);
    }else{
        printf("%d não é um número perfeito.\n", n);
    }
    return 0;
}
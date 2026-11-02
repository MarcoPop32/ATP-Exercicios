#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n, acm = 0;

    //Entrada de dados 
    printf("Digite um número para verificar se é número perfeito: ");
    scanf("%d", &n);

    //Laço de repetição 
    for(int i = 1; i < n; i++){
        if(n % i == 0){ //Verifica se os números de i são divisores de n
            acm += i; //Armazena esses valores e soma 
        }
    }
    //Condição para caso a soma dos valores de acm seja igual ao número digitado
    if(acm == n){
        printf("O número %d é um número perfeito", n);
    }else{
        printf("O número %d não é um número perfeito", n);
    }
    return 0;
}
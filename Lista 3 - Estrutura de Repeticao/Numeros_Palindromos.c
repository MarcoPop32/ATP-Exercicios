#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n, original, ultimo_digito, inverso = 0;

    printf("Digite um número para verificar se é palindromo: ");
    scanf("%d", &n);

    // Salva o valor original de n para usar na comparação e no printf
    original = n;

    //Laço de repetição para fazer a inversão dos números
    while(n != 0){
        ultimo_digito = n % 10;
        inverso = inverso * 10 + ultimo_digito;
        n /= 10;
    }

    // Compara o número invertido com o número original
    if(inverso == original){
        printf("O número %d é palindromo\n", original);
    }else{
        printf("O número %d não é palindromo\n", original);
    }

    return 0;
}
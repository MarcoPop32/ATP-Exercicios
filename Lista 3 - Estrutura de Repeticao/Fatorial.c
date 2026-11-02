#include <stdio.h>

int main() {
    //Declaração das variáveis
    int numero, fatorial = 1;

    //Entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    //Laço de repetição para cálculo do fatorial
    for(int i = 1; i <= numero; i++){
        fatorial *= i;
    }

    //Saída de dados
    printf("O fatorial de %d é: %d", numero, fatorial);

    return 0;
}
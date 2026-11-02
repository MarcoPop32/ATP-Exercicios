#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n, resto, octal = 0, posicao = 1;

    //Entrada dos dados
    printf("Digite um número para converter em octal: ");
    scanf("%d", &n);

    printf("A conversão de %d para octal é igual a: ", n);


    //Laço de repetição para conversão de decimal para octal
    while(n > 0){
        resto = n % 8; //Pega o resto 6 ou 3 da divisão por 8
        octal += resto*posicao; //Organiza a posição do resto
        posicao *= 10; //Avança para a próxima casa decimal
        n /= 8; //Divide para verificar os outros valores da divisão
    }

    printf("%d ", octal);


    return 0;
}
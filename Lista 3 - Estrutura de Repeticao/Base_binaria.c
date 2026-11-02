#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n, resto, binario = 0, posicao = 1;

    //Entrada dos dados
    printf("Digite um número para converter em binário: ");
    scanf("%d", &n);

    printf("A conversão de %d para binário é igual a: ", n);

    //Caso o usuário digite 0 logo no começo do programa
    if(n == 0){
        printf("0");
        return 0;
    }

    //Laço de repetição para conversão de decimal para binário
    while(n > 0){
        resto = n % 2; //Pega o resto 2 ou 1 da divisão por 2
        binario += resto*posicao; //Organiza a posição do resto
        posicao *= 10; //Avança para a próxima casa decimal
        n /= 2; //Divide para verificar os outros valores da divisão
    }

    printf("%d ", binario);


    return 0;
}
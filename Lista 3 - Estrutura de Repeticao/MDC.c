#include <stdio.h>

int main(){
    //Declaração das Variáveis
    int n1, n2, a, b, mdc = 0, resto;

    //Entrada de dados
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o valor do segundo número: ");
    scanf("%d", &n2);

    //
    a = n1;
    b = n2;

    //Laço de repetição para verificar o maior divisor de a e b 
    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    //Recebe o valor do máximo divisor dado por a 
    mdc = a; 

    //Saída dos dados
    printf("O valor do MDC de %d e %d é igual a: %d", n1, n2, mdc);

    return 0;
}
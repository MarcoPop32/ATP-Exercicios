#include <stdio.h>

int main(){
    //Declaração das variáveis
    int o, resto, decimal = 0, potencia = 1;

    //Entrada dos dados
    printf("Digite um número em octal: ");
    scanf("%d", &o);

    printf("O número octal em decimal é igual a: ");

    //Laço de repetição para conversão de binário para decimal
    while(o > 0){
        resto = o % 10; //Pega o último dígito
        decimal += resto*potencia; //Multiplica pela potência de 8 esse digito
        potencia *= 8; //Aumenta a potência por 8 para os próximos valores
        o /= 10; //Divide para verificar os valores das outras divisões
    }

    //Saída 
    printf("%d ", decimal);

    return 0;
}
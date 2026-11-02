#include <stdio.h>

int main(){
    //Declaração das variáveis
    int b, resto, decimal = 0, potencia = 1;

    //Entrada dos dados
    printf("Digite um número em binário (0 ou 1): ");
    scanf("%d", &b);

    printf("O número binário em decimal é igual a: ");

    //Laço de repetição para conversão de binário para decimal
    while(b > 0){
        resto = b % 10; //Pega o último dígito
        decimal += resto*potencia; //Multiplica pela potência de 2 esse digito
        potencia *= 2; //Aumenta a potência por 2 para os próximos valores
        b /= 10; //Divide para verificar os valores das outras divisões
    }

    //Saída 
    printf("%d ", decimal);

    return 0;
}
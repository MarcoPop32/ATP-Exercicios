#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n1, n2, hexa, potencia = 1;

    //Entrada de dados
    printf("Digite um número decimal para converter em hexadecimal: ");
    scanf("%d", &n1);

    //Contagem das casas hexadecimais que o número tem
    n2 = n1;
    while(n2 >= 16){
        n2 /= 16;
        potencia *= 16;
    }

    printf("A conversão para hexadecimal é igual a: ");
    while(potencia >= 1){ 
        hexa = n1/potencia; //Pega o último dígito da divisão 
        n1 %= potencia; //Pega o resto da divisão 

        //Condição para impressão dos números convertidos
        if(hexa < 10){ //Pega valores de 0 a 9 para imprimir 
            printf("%d", hexa);
        }else{ //Faz a conversão de 11 a 15 para letras de acordo com o sistema hexadecimal
            printf("%c", 'A'+(hexa-10)); //Faz a leitura de acordo com a tabela ASCII e converte para letra dentro do intervalo estimado
        }

        potencia /= 16; //Segue para a próxima casa
    }



    return 0;
}
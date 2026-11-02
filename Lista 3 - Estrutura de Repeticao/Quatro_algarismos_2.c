#include <stdio.h>
#include <math.h>

//Diferente do 1°, esse verifica todos os números de 1 até 9999 se satisfazem a condição.
int main(){
    //Declaração das variáveis
    int primeiro = 0, ultimo = 0, soma = 0, pot = 0;

    //Laço de repetição
    for(int i = 2; i < 9999; i++){

        //Processamento para pegar os 2 primeiros e últimos números da divisão
        primeiro = i/100;
        ultimo = i % 100;
        soma = primeiro + ultimo; //Soma esses 2 números 

        pot = pow(soma,2);

        if(pot == i){ //Verifica se a potência é igual ao número digitado 
            printf("A soma das dezenas dado os 2 primeiros (%d) e últimos digitos (%d) é um quadrado perfeito (%d) de %d.\n", primeiro, ultimo, soma, i);
        }
    }

    return 0;
}

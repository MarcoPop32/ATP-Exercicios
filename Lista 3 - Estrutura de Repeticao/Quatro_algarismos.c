#include <stdio.h>
#include <math.h>

int main(){
    //Declaração das variáveis
    int n, primeiro = 0, ultimo = 0, soma = 0, pot = 0;

    //Laço de repetição com valor de flag -1
    while(n != -1){
        printf("Digite um número com 4 algarismos: ");
        scanf("%d", &n);
        if(n == -1){ //Para o script
            break;
        }
        if(n < 1000 || n > 9999){ //Verifica se o número digitado tem 4 algarismos
            printf("Esse número não tem 4 algarismos.\n");
            continue;
        }

        //Processamento para pegar os 2 primeiros e últimos números da divisão
        primeiro = n/100;
        ultimo = n % 100;
        soma = primeiro + ultimo; //Soma esses 2 números 

        pot = pow(soma,2);

        if(pot == n){ //Verifica se a potência é igual ao número digitado 
            printf("A soma das dezenas dado os 2 primeiros (%d) e últimos digitos (%d) é um quadrado perfeito (%d) de %d.\n", primeiro, ultimo, soma, n);
        }else{
            printf("Esse número não é um quadrado perfeito.\n");
        }
    }

    return 0;
}

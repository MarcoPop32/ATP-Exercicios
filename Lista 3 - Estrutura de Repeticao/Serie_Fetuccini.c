#include <stdio.h>

int main() {
    //Declaração das variáveis
    int n, t1, t2, valorTermo;

    //Entrada dos dados
    printf("Digite o valor do primeiro termo: ");
    scanf("%d", &t1);

    printf("Digite o valor do segundo termo: ");
    scanf("%d", &t2);

    printf("Digite um valor para N para achar os N primeiros termos da serie de Fetuccini: ");
    scanf("%d", &n);

    //Imprime os dois primeiros termos da série de Fetuccini
    if(n >= 1){
        printf("%d ", t1);
    }
    if(n >= 2){
        printf("%d ", t2);
    }
    //Laço de repetição para imprimir os termos da série de Fetuccini 
    for(int i = 2; i < n; i++){
        int posicao = i+1; //Posição real do termo para evitar erros de cálculo

        //Condição para verificar se o termo é par ou ímpar
        if(posicao % 2 == 0){ //Caso o termo seja par, faz a subtração do termo anterior com o atual
            valorTermo = t2-t1;
        }else{ //Caso o termo seja ímpar, faz a soma do termo anterior com o atual 
            valorTermo = t2+t1;
        }
        printf("%d ", valorTermo);
        t1 = t2;
        t2 = valorTermo;
    }

    return 0;
}

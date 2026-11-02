#include <stdio.h>

int main(){

    //Declaração das variáveis
    int n, flag = -1;

    //Laço de repetição para verificar se o número é primo ou não
    while(n != flag){
        printf("Digite um número qualquer (-1 para sair): " );
        scanf("%d", &n);

        //Condição para que ele não imprima as 2 condições abaixo ao finalizar.
        if(n == -1){
            break;
        }

        if(n % 2 != 0 || n == 2){
            printf("O número %d é um número primo.\n", n);
        }else{
            printf("O número %d não é um número primo.\n", n);
        }
    }
    return 0;
}
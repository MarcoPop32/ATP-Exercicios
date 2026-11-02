#include <stdio.h>

int main() {
    //Declaração das variáveis
    int n, t1 = 0, t2 = 1, soma = 0;


    //Entrada dos dados
    printf("Digite um valor para N para achar os N primeiros termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("A sequência de Fibonacci até o %d° termo é: ", n);
    
    //Laço de repetição para imprimir os termos da sequência de Fibonacci
    for(int i = 0; i <= n; i++){
        printf("%d ", t1);
        soma = t1 + t2;
        t1 = t2; 
        t2 = soma;
    }


}

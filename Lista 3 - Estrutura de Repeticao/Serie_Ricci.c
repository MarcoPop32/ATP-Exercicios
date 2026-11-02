#include <stdio.h>

int main() {
    //Declaração das variáveis
    int n, t1, t2, soma = 0;

    //Entrada dos dados
    printf("Digite o valor do primeiro termo: ");
    scanf("%d", &t1);

    printf("Digite o valor do segundo termo: ");
    scanf("%d", &t2);

    printf("Digite um valor para N para achar os N primeiros termos da série de Ricci: ");
    scanf("%d", &n);

    printf("A série de Ricci até o %d° termo é: ", n);
    
    //Laço de repetição para imprimir os termos da série de Ricci
    for(int i = 0; i < n; i++){
        printf("%d ", t1);
        soma = t1 + t2;
        t1 = t2; 
        t2 = soma;
    }


}

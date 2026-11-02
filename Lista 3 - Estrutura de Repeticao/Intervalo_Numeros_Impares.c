#include <stdio.h>

int main(){
    //Declaração das variáveis
    int n1, n2, a;

    //Entrada dos dados
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("O intervalo entre os números ímpares de %d e %d são: ", n1, n2);

    //Inicia com o próximo termo do intervalo entre n1 e n2 
    a = n1+1;

    //Laço de repetição para imprimir todos os números ímpares do intervalo entre n1 e n2
    while(a > n1 && a <= n2){
        if(a % 2 != 0){
            printf("%d ", a);
        }
        a++;
    }
    return 0;
}
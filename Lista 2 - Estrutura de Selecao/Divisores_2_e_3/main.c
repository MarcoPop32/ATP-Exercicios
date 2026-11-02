#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração das variáveis
    int n1, n2, n3, n4;

    //Entrada dos dados
    printf("Digite quatro números: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("\nNúmeros que são divisíveis por 2 e 3:\n");
    //Condição de saída, vai verificar se o resto é 0 caso seja divisor de 2 e 3
    if(n1 % 2 == 0 && n1 % 3 == 0){
        printf("%d\n", n1);
    }
    if(n2 % 2 == 0 && n2 % 3 == 0){
        printf("%d\n", n2);
    }
    if(n3 % 2 == 0 && n3 % 3 == 0){
        printf("%d\n", n3);
    }
    if(n4 % 2 == 0 && n4 % 3 == 0){
        printf("%d\n", n4);
    }


    return 0;
}

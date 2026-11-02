#include <stdio.h>


int main(){
    //Declaração das variáveis
    int n, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    //Laço de repetição com condição no final
    do{
        //Entrada dos dados
        printf("Digite um número: ");
        scanf("%d", &n);

        //Condição de contagem dado o intervalo
        if(n >= 0 && n <= 25){ //intervalo de 0 a 25
            cont1++;
        }else if(n >= 26 && n <= 50){
            cont2++;
        }else if(n >= 51 && n <= 75){
            cont3++;
        }else if(n >= 76 && n <= 100){
            cont4++;
        }
    } while(n >= 0);

    //Saida dos dados
    printf("Contador de números nos seguintes intervalos:\n");
    printf("[0,25]: %d\n", cont1);
    printf("[26,50]: %d\n", cont2);
    printf("[51,75]: %d\n", cont3);
    printf("[76,100]: %d", cont4);



    return 0;
}
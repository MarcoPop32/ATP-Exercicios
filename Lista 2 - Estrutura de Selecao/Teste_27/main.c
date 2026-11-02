#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração da variável
    int num;

    //Entrada de dados
    printf("Digite um número: ");
    scanf("%d", &num);

    //Condição de saída
    if(num > 0){
        printf("NÚMERO POSITIVO"); //Se n = 20 ele irá mostrar essa mensagem
    }else if(num < 0){
        printf("NÚMERO NEGATIVO"); //Se n = -3 ele irá mostrar essa mensagem
    }else if(num == 0){
        printf("Zero."); //Se n = 0 ele irá mostrar essa mensagem
    }


    return 0;
}

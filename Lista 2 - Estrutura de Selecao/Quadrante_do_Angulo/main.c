#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variáveis
    int angulo;

    //Entrada de dados
    printf("Escolha um ângulo qualquer (apenas números): ");
    scanf("%d", &angulo);

    //Processamento
    if(angulo >= 360 || angulo <= -360){
        angulo = angulo%360; //Pega o resto da divisão que é o valor reduzido do ângulo caso maior que 360 ou menor que -360
    }

    //Seleção de saída
    if(angulo >= 0 && angulo < 90 || angulo <= -270 && angulo >= -360){
        printf("\nEsse ângulo pertence ao 1° quadrante.");
    }else if(angulo >= 90 && angulo < 180 || angulo <= -180 && angulo > -270){
        printf("\nEsse ângulo pertence ao 2° quadrante.");
    }else if(angulo >= 180 && angulo < 270 || angulo <= -90 && angulo > -180){
        printf("\nEsse ângulo pertence ao 3° quadrante.");
    }else if(angulo >= 270 && angulo < 360 || angulo < 0 && angulo > -90){
        printf("\nEsse ângulo pertence ao 4° quadrante.");
    }





    return 0;
}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variaveis
    int A, B, C;
    int delta = 0;
    float raiz1, raiz2 = 0; //Tipo float para poder fazer a validação da condição

    //Entrada de dados
    printf("Insira o valor dos coeficientes A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    //Processamento
    delta = pow(B,2)-(4*A*C);

    //Condição de saída, para caso o delta seja menor que zero
    if(delta < 0){
        printf("A equação não possui raízes reais");
    }else{
    raiz1 = (-B+sqrt(delta))/(2*A);
    raiz2 = (-B-sqrt(delta))/2*A;

    printf("O valor das raízes reais são: %.2f e %.2f", raiz1, raiz2);
    }

    return 0;
}

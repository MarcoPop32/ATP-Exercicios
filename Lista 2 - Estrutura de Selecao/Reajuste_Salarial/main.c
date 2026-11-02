#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    float salario; //Declaração de variável

    //Entrada de dados
    printf("Insira o valor do seu salário para um reajuste: ");
    scanf("%f", &salario);

    //Condição de saída
    if(salario <= 300){
        printf("O seu novo salário é de %.2f", salario*1.5);
    }else{
    printf("O seu novo salário é de %.2f", salario*1.3);

    }
    return 0;
}

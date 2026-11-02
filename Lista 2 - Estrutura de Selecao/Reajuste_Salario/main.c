#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float salario, aumento = 0;

    //Entrada de dados
    printf("Insira o valor do seu salário: ");
    scanf("%f", &salario);

    //Processamento
    aumento = salario*1.3;

    //Condição de saída
    if(salario < 500){
        printf("Seu salário foi reajustado para %.2f", aumento);
    }else{
    printf("Você não tem direito a aumento.");
    }


    return 0;
}

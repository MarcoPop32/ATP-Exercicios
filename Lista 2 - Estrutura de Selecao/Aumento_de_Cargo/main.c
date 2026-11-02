#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float salario;
    int codigo;

    //Entrada de dados
    printf("Insira o valor do seu salário: ");
    scanf("%f", &salario);

    printf("Informe o código do seu cargo: ");
    scanf("%d", &codigo);

    //Condições de saída
    if(codigo == 1){
        printf("Cargo: Escrituário\n Seu novo salário será de %.2f.", salario*1.5);
    }else if(codigo == 2){
        printf("Cargo: Secretário\n Seu novo salário será de %.2f.", salario*1.35);
    }else if(codigo == 3){
        printf("Cargo: Caixa\n Seu novo salário será de %.2f.", salario*1.2);
    }else if(codigo == 4){
        printf("Cargo: Gerente\n Seu novo salário será de %.2f.", salario*1.1);
    }else if(codigo == 5){
        printf("Cargo: Diretor\n Você não tem direito à aumento ");
    }else{
        printf("Erro! Informe um código válido.");
    }

    return 0;
}

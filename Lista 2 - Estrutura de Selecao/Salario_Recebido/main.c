#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variaveis
    int horas_trabalhadas, dependentes, horas_extras, gratificacao;
    float IRRF, salario_bruto, salario_liquido, hora_trabalhada, salario_mensal, salario_recebido; //Alguns valores recebem decimais, por isso declarados como float para não dar problema

    int salario_minimo = 1600;

    //Entrada de dados
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Insira a quantidade de dependentes: ");
    scanf("%d", &dependentes);
    printf("Insira a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horas_extras);

    //Processamento
    hora_trabalhada = (salario_minimo/5)+(horas_extras*1.5);

    salario_mensal = horas_trabalhadas*hora_trabalhada;

    dependentes = dependentes*32;

    salario_bruto = salario_mensal+dependentes+horas_extras;

    //Condição para cálculo de imposto
    if(salario_bruto < 200){
        IRRF = 0;
    }else if(salario_bruto >= 200 && salario_bruto <= 500){
        IRRF = 0.1;
    }else if(salario_bruto > 500){
        IRRF = 0.2;
    }

    salario_liquido = salario_bruto-(salario_bruto*IRRF);

    //Condição para valor de gratificacao
    if(salario_liquido <= 350){
        gratificacao = 100;
    }else if(salario_liquido > 350){
        gratificacao = 50;
    }

    salario_recebido = salario_liquido+gratificacao;

    //Saida
    printf("O salário recebido foi de R$%.2f", salario_recebido);


    return 0;
}

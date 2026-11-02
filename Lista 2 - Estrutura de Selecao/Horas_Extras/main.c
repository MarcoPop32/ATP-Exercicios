#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variáveis
    int horas_extras, horas_faltas, Horas;

    //Entrada de dados
    printf("Insira a quantidade de horas extras trabalhada (em minuto): ");
    scanf("%d", &horas_extras);
    printf("Digite a quantidade de horas que faltou ao trabalho (em minuto): ");
    scanf("%d", &horas_faltas);

    //Processamento
    Horas = horas_extras - ((2*horas_faltas)/3);

    printf("\nQuantidade de horas: %dh\n", Horas);
    printf("\nQuantidade de horas extras: %dh\n", horas_extras/60);
    printf("\nQuantidade de horas faltadas: %dh\n", horas_faltas/60);

    //Seleção de Saída
    if(Horas > 240){
        printf("\nVocê ganhou um prêmio de R$500!");
    }else if(Horas > 1800 && Horas <= 2400){
        printf("\nVocê ganhou um prêmio de R$400!");
    }else if(Horas > 1200 && Horas <= 1800){
        printf("\nVocê ganhou um prêmio de R$300!");
    }else if(Horas > 600 && Horas <= 1200){
        printf("\nVocê ganhou um prêmio de R$200");
    }else if(Horas <= 600){
        printf("\nVocê ganhou um prêmio de R$100");
    }




    return 0;
}

#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float altura, peso_ideal = 0;
    char genero;

    //Entrada de dados
    printf("Insira o valor da sua altura(m): ");
    scanf("%f", &altura);

    fflush(stdin); //Limpeza de buffer para não pular essa etapa
    printf("Indique seu sexo (M para masculino e F para feminino): ");
    scanf("%c", &genero);

    //Condição de saída
    if(genero == 'M'){
        peso_ideal = (72.7*altura)-58;
        printf("Seu peso ideal é de %.2fkg", peso_ideal);
    }else if(genero == 'F'){
        peso_ideal = (62.1*altura)-44.7;
        printf("Seu peso ideal é de %.2fkg", peso_ideal);
    }else{
    printf("Erro! Sexo não identificado.");
    }


    return 0;
}

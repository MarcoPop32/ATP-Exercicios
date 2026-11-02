#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variável
    int idade;

    //Entrada de dados
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    //Condição de saída
    if(idade > 0 && idade <= 2){
        printf("Classificação: Recém-nascido.");
    }else if(idade >= 3 && idade <= 11){
        printf("Classificação: Criança.");
    }else if(idade >= 12 && idade <= 19){
        printf("Classificação: Adolescente.");
    }else if(idade >= 20 && idade <= 55){
        printf("Classificação: Adulto.");
    }else if(idade > 55){
        printf("Classificação: Idoso.");
    }

    return 0;
}

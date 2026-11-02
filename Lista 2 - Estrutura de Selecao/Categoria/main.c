#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
    printf("Sua categoria é infantil A");
    }else if(idade >= 8 && idade <= 10){
    printf("Sua categoria é infantil B");
    }else if(idade >= 11 && idade <= 13){
    printf("Sua categoria é juvenil A");
    }else if(idade >= 14 && idade <= 17){
    printf("Sua categoria é juvenil B");
    }else if(idade >= 18){
    printf("Sua categoria é sênior");
    }

    return 0;
}

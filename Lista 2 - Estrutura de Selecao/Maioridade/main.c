#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade > 18){
        printf("Você é maior de idade.");
    }else{
    printf("Você não é maior de idade.");
    }

    return 0;
}

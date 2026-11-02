#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d é um número par.", numero);
    }else{
        printf("%d é um número ímpar.", numero);
    }

    return 0;
}

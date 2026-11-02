#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variáveis
    int idade;
    char grupo;

    //Entrada dos dados
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    //Para garantir de que finalize o programa caso seja menor de 18.
    if(idade < 18){
        printf("Sua idade não é válida para receber um seguro.");
    }else{


    //Limpeza de Buffer para não pular o char
    fflush(stdin);
    printf("Indique seu grupo de risco(b para Baixo, m para Médio ou a para Alto): ");
    scanf("%c", &grupo);

    //Condições de saída
    if(idade >= 18 && idade <= 24){
        if(grupo == 'b' || grupo == 'B'){
            printf("\nCódigo de Segurança: 7");
        }else if(grupo == 'm' || grupo == 'M'){
            printf("\nCódigo de Segurança: 8");
        }else if(grupo == 'a' || grupo == 'A'){
            printf("\nCódigo de Segurança: 9");
        }else{
            printf("\nInforme um grupo válido!");
        }
    }else if(idade >= 25 && idade <= 40){
        if(grupo == 'b' || grupo == 'B'){
            printf("\nCódigo de Segurança: 4");
        }else if(grupo == 'm' || grupo == 'M'){
            printf("\nCódigo de Segurança: 5");
        }else if(grupo == 'a' || grupo == 'A'){
            printf("\nCódigo de Segurança: 6");
        }else{
            printf("\nInforme um grupo válido!");
        }
    }else if(idade >= 41 && idade <= 70){
        if(grupo == 'b' || grupo == 'B'){
            printf("\nCódigo de Segurança: 1");
        }else if(grupo == 'm' || grupo == 'M'){
            printf("\nCódigo de Segurança: 2");
        }else if(grupo == 'a' || grupo == 'A'){
            printf("\nCódigo de Segurança: 3");
        }else{
            printf("\nInforme um grupo válido!");
        }
    }
    }
    return 0;
}

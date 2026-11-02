#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float nota1, nota2, nota3, nota4 , media = 0;

    //Entrada de dados
    printf("Insira o valor das 4 notas do aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    //Processamento
    media = (nota1+nota2+nota3+nota4)/4;

    //Estrutura de seleção para caso média seja menor que 7 ou maior que 7
    if(media < 7){
        printf("Você foi reprovado com média igual a %.2f.", media);
    }else if(media >= 7){
    printf("Parabéns, você foi aprovado com média igual a %.2f", media);
    }

    return 0;

}

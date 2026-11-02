#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float nota1, nota2, nota3, media = 0;

    //Entrada de dados
    printf("Insira a primeira, segunda e terceira nota: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //Processamento
    media = (nota1+nota2+nota3)/3;

    //Condição de saída
    if(media >= 0 && media < 5){
        printf("O aluno foi reprovado com média %.2f", media);
    }else if(media >= 5 && media < 7){
        printf("O aluno fará um novo exame.");
    }else if(media >= 7 && media <= 10){
        printf("O aluno foi aprovado com média %.2f", media);
    }


    return 0;
}

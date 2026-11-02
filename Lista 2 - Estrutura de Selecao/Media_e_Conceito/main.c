#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variáveis
    float nota1, nota2, nota3, media_ponderada = 0;

    //Entrada de dados
    printf("Insira o valor da nota do componente Laboratório: ");
    scanf("%f", &nota1);

    printf("Insira o valor da nota da Avaliação Semestral: ");
    scanf("%f", &nota2);

    printf("Insira o valor da nota do Exame Final: ");
    scanf("%f", &nota3);

    //Processamento
    media_ponderada = (nota1*2+nota2*3+nota3*5)/10;

    //Condição de saída
    if(media_ponderada < 5){
        printf("Sua média foi %.2f\nConceito: E", media_ponderada);
    }else if(media_ponderada >= 5 && media_ponderada <6){
        printf("Sua média foi %.2f\nConceito: D", media_ponderada);
    }else if(media_ponderada >= 6 && media_ponderada < 7){
        printf("Sua média foi %.2f\nConceito: C", media_ponderada);
    }else if(media_ponderada >= 7 && media_ponderada < 8){
        printf("Sua média foi %.2f\nConceito: B", media_ponderada);
    }else if(media_ponderada >= 8 && media_ponderada <= 10){
        printf("Sua média foi %.2f\nConceito: A", media_ponderada);
    }

    return 0;
}

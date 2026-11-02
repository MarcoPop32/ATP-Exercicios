#include <stdio.h>
#include <string.h>

int main(){
    int natalidade;
    int meses;
    char sexo[20]; 

    int total_mortas = 0, masc_mortos = 0, mortes_24 = 0;

    printf("Digite o número de crianças nascida no período: ");
    scanf("%d", &natalidade);

    for(int i = 1; i<= natalidade; i++){
        printf("Escreva o sexo da criança (M- masculino, F- feminino): ");
        scanf(" %c", &sexo);

        if(strcmp(sexo, "vazio") == 0){
            break;
        }

        switch(sexo[0]){
            case 'm':
            case 'M':
            printf("Escreva o número de meses de vida da criança: ");
            scanf("%d", &meses);

            masc_mortos++; 
            total_mortas++;
            if(meses >= 24){
                mortes_24++;
            }

            break;
            case 'f':
            case 'F':
            printf("Escreva o número de meses de vida da criança: ");
            scanf("%d", &meses);

            total_mortas++;
            if(meses <= 24){
                mortes_24++;
            }
            break;
            default:
            printf("Sexo inválido!\n");
            i--;
            break;

        }
    }

    if(natalidade > 0){
        float perc_morte = ((float)total_mortas/natalidade)*100;
        printf("Porcentagem de crianças mortas %.2f%%\n", perc_morte);
    }
    if(total_mortas > 0){
        float perc_masc = ((float)masc_mortos/total_mortas)*100;
        float porc_24 = ((float)mortes_24/total_mortas)*100;

        printf("Porcentagem de meninos mortos: %.2f%%\n", perc_masc);
        printf("Porcentagem de crianças com 24 meses ou menos mortos: %.2f%%\n", porc_24);
    }


    return 0;
}
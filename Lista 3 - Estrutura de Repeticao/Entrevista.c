#include <stdio.h>
#include <string.h>

int main(){
    char sexo;
    char escolha[10];
    int cont_s = 0, cont_n = 0, cont_sf = 0, cont_nm = 0;
    int cont_f = 0, cont_m = 0;

    for(int i = 1; i <= 2000; i++){
        printf("\nInforme seu sexo (M = masculino, F = feminino): ");
        scanf(" %c", &sexo);

        switch(sexo){
            case 'm': 
            case 'M':
                printf("Você gostou do produto? (sim ou nao): ");
                scanf("%s", escolha);
                cont_m++;
                if(escolha[0] == 's' || escolha[0] == 'S'){
                    cont_s++;
                } else {
                    cont_n++;
                    cont_nm++;
                }
                break;

            case 'f': 
            case 'F':
                printf("Você gostou do produto? (sim ou nao): ");
                scanf("%s", escolha);
                cont_f++;
                if(escolha[0] == 's' || escolha[0] == 'S'){
                    cont_s++;
                    cont_sf++;
                } else {
                    cont_n++;
                }
                break;

            default:
                printf("Sexo inválido!\n");
                i--;
                break;
        }
    }

    float perc_feminino = (cont_sf * 100.0f) / cont_f;
    float perc_masculino = (cont_nm * 100.0f) / cont_m;

    printf("\nQuantidade de pessoas que responderam sim: %d\n", cont_s);
    printf("Quantidade de pessoas que responderam não: %d\n", cont_n);
    printf("Percentual de mulheres que responderam sim: %.2f%%\n", perc_feminino);
    printf("Percentual de homens que responderam não: %.2f%%\n", perc_masculino);

    return 0;
}
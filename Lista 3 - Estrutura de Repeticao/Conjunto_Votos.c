#include <stdio.h>

int main(){
    int n, cont_v1 = 0, cont_v2 = 0, cont_v3 = 0, cont_v4 = 0, cont_b = 0, cont_n = 0, cont = 0;
    float perc_branco = 0.0, perc_nulo = 0.0;

    do{
        printf("\nDigite o número do candidato para votar:\n[1]- Candidato 1\n[2]- Candidato 2\n[3]- Candidato 3\n[4]- Candidato 4\n[5]- Voto Nulo\n[6]- Branco\n[0]- Encerrar votação\n");
        scanf("%d", &n);

        if(n != 0){
            switch(n){
                case 1:
                    cont_v1++;
                    break;
                case 2:
                    cont_v2++;
                    break;
                case 3:
                    cont_v3++;
                    break;
                case 4:
                    cont_v4++;
                    break;
                case 5:
                    cont_n++;
                    break;
                case 6:
                    cont_b++;
                    break;
                default:
                    printf("Opção inválida!\n");
                    continue; 
            }
            cont++;
        }

    } while(n != 0);

    if(cont > 0){
        perc_branco = (cont_b * 100.0f) / cont;
        perc_nulo = (cont_n * 100.0f) / cont;
    }

    printf("\nTotal de Votos de cada candidato:\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\n", cont_v1, cont_v2, cont_v3, cont_v4);
    printf("Total de Votos Nulos: %d\n", cont_n);
    printf("Total de Votos em Branco: %d\n", cont_b);
    printf("Percentual de Votos em Branco: %.2f%%\n", perc_branco);
    printf("Percentual de Votos Nulos: %.2f%%\n", perc_nulo);

    return 0;
}
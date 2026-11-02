#include <stdio.h>
#include <string.h>


int main(){
    char chamada[4];
    char finalizador[4] = "FIM";
    int total = 0, cont_falta = 0, cont_presenca = 0;

    do{
        printf("O aluno %d esteve presente na 1° prova? (P/A) - Digite FIM para finalizar o programa: ", total);
        scanf("%s", chamada);

        if(strcasecmp(chamada, finalizador) != 0){
            if(chamada[0] == 'P' || chamada[0] == 'p'){
                cont_presenca++;
            }
            if(chamada[0] == 'F' || chamada[0] == 'f'){
                cont_falta++;
            }
            total++;
        }
    }while(strcasecmp(chamada, finalizador) != 0);

    if(total > 0){
    printf("\nPercentual de alunos que faltaram: %.2f%%", (cont_falta*100.0f)/total);
    } else{
        printf("\nNenhum aluno registrado.");
    }
    return 0;
}
#include <stdio.h>


int main(){
    int matricula, alunos; 
    int ausencia = 0;
    char turma;
    char status;

    for(int i = 1; i <= 3; i++){
        int contAusentes = 0;

        printf("Turma (A, B, C,...): ");
        scanf(" %c", &turma);
        printf("Alunos matriculados na turma: ");
        scanf("%d", &alunos);

        for(int j = 1; j <= alunos; j++){
            printf("Matricula do aluno %d: ", j);
            scanf("%d", &matricula);
            printf("Aluno esteve presente na prova? (A = Ausente, P = Presente): ");
            scanf(" %c", &status);

            if(status == 'A' || status == 'a'){
                contAusentes++;
            }
        }
        float percAusente = (contAusentes*100.0f)/alunos;

        printf("Turma %c - Percentual de ausência: %.2f%%\n", turma, percAusente);

        if(percAusente > 5.0f){
            ausencia++;
        }
    }

    printf("\nQuantidade de turmas com ausência superior a 5%%: %d\n", ausencia);

    return 0;
}
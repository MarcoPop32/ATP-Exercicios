#include <stdio.h>


int main(){
    float n1, n2, n3, maior, menor, MP = 0.0;
    int matricula;

    do{
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &matricula);
        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        maior = n1;

        if(n2 > maior){
            maior = n2;
        }
        if(n3 > maior){
            maior = n3;
        }

        menor = (n1+n2+n3-maior)*3;

        MP = ((maior*4)+menor)/10;

        printf("Matrícula do Aluno: %d\n", matricula);
        printf("Nota 1 do aluno: %.2f\nNota 2 do aluno: %.2f\nNota 3 do aluno: %.2f\n", n1, n2, n3);
        printf("Média do Aluno: %.2f\n", MP);
        if(MP >= 5){
            printf("Situação do aluno: APROVADO\n");
        }else if(MP < 5){
            printf("Situação do aluno: REPROVADO\n");
        }

    } while(matricula > 0);

    return 0;
}
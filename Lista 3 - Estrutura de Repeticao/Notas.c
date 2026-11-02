#include <stdio.h>


int main(){
    float nota_final, maior = 0, menor = 10;
    float media = 0, media_final = 0;
    int reprovados = 0;


    for(int i = 1; i <= 5; i++){
        printf("Digite a nota final do aluno %d: ", i);
        scanf("%f", &nota_final);
    
        if(nota_final < 6){
            reprovados++;
        }
        if(nota_final > maior){
            maior = nota_final;
        }
        if(nota_final < menor){
            menor = nota_final;
        }

        media += nota_final;
        media_final = media/5;

    }

    printf("Média final da turma: %.2f\n", media_final);
    printf("Número de alunos reprovados: %d\n", reprovados);
    printf("Menor nota: %.2f\nMaior Nota:%.2f\n", menor, maior);
    

    return 0;
}
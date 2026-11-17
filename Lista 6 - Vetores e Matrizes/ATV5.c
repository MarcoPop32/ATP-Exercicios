#include <stdio.h>

void lerNota(float n[]);
float media(float n[]);

int main(){
    float notas[15];

    lerNota(notas);

    printf("Média geral da Turma: %.2f", media(notas));
}

void lerNota(float n[]){
    for(int i = 0; i < 15; i++){
        printf("Nota do Aluno %d: ", i+1);
        scanf("%f", &n[i]);
    }
}

float media(float n[]){
    float soma = 0;

    for(int i = 0; i < 15; i++){
        soma += n[i];
    }

    return soma / 15;
}
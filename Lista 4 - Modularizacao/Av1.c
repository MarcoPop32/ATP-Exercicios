
#include <stdio.h>

// Protótipos das funções
float lerNota(int k);
float media(int n);
void situacao(int m);

int main(){
    float mediaAluno;
    int qntd;

    printf("Indique a quantidade de alunos: ");
    scanf("%d", &qntd);

    for(int i = 1; i <= qntd; i++){
        printf("\nAluno %d:\n", i);

        mediaAluno = media(3);

        printf("Media: %.2f\n", mediaAluno);

        situacao(mediaAluno);
    }

    return 0;
}

// Função responsável pela leitura e validação da nota
float lerNota(int k){
    float nota;

    do{
        printf("Nota %d: ", k);
        scanf("%f", &nota);
    }while(nota < 0 || nota > 10);

    return nota;
}

// Função responsável pelo cálculo da média
float media(int n){
    float soma = 0;

    for(int k = 1; k <= n; k++){
        soma += lerNota(k);
    }

    return soma / n;
}

// Função responsável pela situação do aluno
void situacao(int m){
    if(m >= 6){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }
}

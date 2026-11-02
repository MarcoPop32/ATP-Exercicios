#include <stdio.h>

#define N 10

void le_notas(int nota[]);

void mediaTurma(int nota[], int *med);

int contaAcima(int nota[], int med);

int main(){
    int nota[N];
    int med;
    int qntd_acima;
    
    printf("Insira a nota dos alunos:\n ");
    
    le_notas(nota);
    
    mediaTurma(nota, &med);
    
    qntd_acima = contaAcima(nota, med);

    printf("A média da turma é de: %d\n", med);
    printf("Quantidade de pessoas que ficaram acima da média: %d\n", qntd_acima); 

    return 0;
    
}

void le_notas(int nota[]){
    for(int i = 0; i < 10; i++){
        printf("Nota do aluno %d: ", i+1);
        scanf("%d", &nota[i]);
    }
}

void mediaTurma(int nota[], int *med){
    int soma = 0;
    for(int i = 0; i < N; i++){
        soma += nota[i];
    }
    *med = soma / N;
}

int contaAcima(int nota[], int med){
    int cont = 0;
    for(int i = 0; i < N; i++){
        if(nota[i] > med){
            cont++;
        }
    }
    return cont;
}
#include <stdio.h>

int main(){
    //Declaração de variáveis
    int notafinal, aprovados = 0;

    //Laço de repetição
    for(int i = 0; i < 5; i++){
        printf("Digite a nota final do aluno: ");
        scanf("%d", &notafinal);

        //Condição de aprovação 
        if(notafinal >= 6){
            aprovados++;
        }
    }
    //Condição de saída para verificar se houve alunos aprovados
    if(aprovados > 0){
    printf("O número de alunos aprovados é: %d", aprovados);
    }else{
        printf("Nenhum aluno foi aprovado.");
    }
}
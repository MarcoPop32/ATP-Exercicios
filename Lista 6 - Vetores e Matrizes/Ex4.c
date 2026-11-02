#include <stdio.h>

#define MAX_PROG 150
#define MAX_CALC 220

int le_turma(int turma[], int max, const char* nome);
int busca_recursiva(int v[], int n, int x);
void imprimir_resultado(int prog[], int n_prog, int calc[], int n_calc);

int main(){
    int prog[MAX_PROG], calc[MAX_CALC];
    int n_prog, n_calc;

    n_prog = le_turma(prog, MAX_PROG, "Programacao");
    n_calc = le_turma(calc, MAX_CALC, "Calculo Numerico");

    imprimir_resultado(prog, n_prog, calc, n_calc);

    return 0;
}

int le_turma(int turma[], int max, const char* nome){
    int n = 0, mat;

    printf("\n---Turma de %s---\n", nome);
    while(n < max){
        printf("Matricula do aluno (9999 para encerrar): ");
        scanf("%d", &mat);
        if(mat == 9999){
            break;
        }
        turma[n++] = mat;
    }
    return n;
}

int busca_recursiva(int v[], int n, int x){
    if(n == 0){
        return 0;
    }
    if(v[n - 1] == x){
        return 1;
    }
    return busca_recursiva(v, n - 1, x);
}

void imprimir_resultado(int prog[], int n_prog, int calc[], int n_calc){
    printf("\n---Alunos Matriculados em ambas as disciplinas---\n");
    for(int i = 0; i < n_prog; i++){
        if(busca_recursiva(calc, n_calc, prog[i])){
            printf("Matricula: %d\n", prog[i]);
        }
    }
}
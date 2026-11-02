#include <stdio.h>
#include <ctype.h>

#define QUESTOES 10
#define MEDIA 6
#define MAX_ALUNOS 500
#define FIM 999

void lerGab(char gab[]);
int corrigir(char gab[]);
int lerAlunos(char gab[], int numeros[], int notas[]);
float percentualAprovacao(int notas[], int n);
void notasMaisFrequentes(int notas[], int n);


int main(){
    char gab[QUESTOES];
    int numeros[MAX_ALUNOS], notas[MAX_ALUNOS], n;

    lerGab(gab);
    n = lerAlunos(gab, numeros, notas);

    if(n == 0){
        printf("\nNenhum aluno foi cadastrado.\n");
        return 0;
    }

    printf("\n--- Notas ---\n");
    for(int i = 0; i < n; i++){
        printf("Aluno %d: Nota %d\n", numeros[i], notas[i]);
    }
    printf("\nPorcentagem de aprovacao: %.2f%%\n", percentualAprovacao(notas, n));
    notasMaisFrequentes(notas, n);

    return 0;
}

void lerGab(char gab[]){
    for(int i = 0; i < QUESTOES; i++){
        printf("Gabarito da questão %d: ", i + 1);
        scanf(" %c", &gab[i]);
    }
}

int corrigir(char gab[]){
    int nota = 0;
    char r;
    for(int i = 0; i < QUESTOES; i++){
        printf(" Resposta %d: ", i + 1);
        scanf(" %c", &r);
        if(toupper(r) == toupper(gab[i])){
            nota++;
        }
    }
    return nota;
}

int lerAlunos(char gab[], int numeros[], int notas[]){
    int n = 0, num;
    printf("\nNumero dl auno (%d para encerrar): ", FIM);
    scanf("%d", &num);
    while(num != FIM && n < MAX_ALUNOS){
        numeros[n] = num;
        notas[n] = corrigir(gab);
        n++;
        printf("\nNumero do aluno (%d para encerrar): ", FIM);
        scanf("%d", &num);
    }
    return n;
}

float percentualAprovacao(int notas[], int n){
    int aprovados = 0;
    for(int i = 0; i < n; i++){
        if(notas[i] >= MEDIA){
            aprovados++;
        }
    }
    return 100.0 * aprovados / n;
}

void notasMaisFrequentes(int notas[], int n){
    int freq[QUESTOES + 1] = {0};
    int maior = 0;

    for(int i = 0; i < n; i++){
        freq[notas[i]]++;
    }
    for(int i = 0; i <= QUESTOES; i++){
        if(freq[i] > maior){
            maior = freq[i];
        }
    }
    printf("Notas mais frequentes: ");
    for(int i = 0; i <= QUESTOES; i++){
        if(freq[i] == maior){
            printf(" %d", i);
        }
    }
    printf(" (%d aluno(s))\n", maior);
}
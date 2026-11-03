#include <stdio.h>

void imprimeDias(int n){
    const char *dias[7] = {"DOM", "SEG", "TER", "QUA", "QUI", "SEX", "SAB"};
    if(n < 1 || n > 7){
        printf("Erro: não é um dia da semana.\n");
    }else{
        printf("%s\n", dias[n-1]);
    }
}

int main(){
    int n;
    printf("Numero do dia (1 a 7): ");
    scanf("%d", &n);
    imprimeDias(n);

    return 0;
}
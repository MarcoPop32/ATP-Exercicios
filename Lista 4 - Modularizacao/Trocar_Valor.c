#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a, b;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    troca(&a, &b);
    printf("Valores depois da troca: a = %d, b = %d\n", a, b);
    return 0;
}
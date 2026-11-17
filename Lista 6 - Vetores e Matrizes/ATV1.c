#include <stdio.h>

void lerEimprimir(int n[]);
int maiorVetor(int n[], int *maior, int *p);

int main(){
    int n[10], maior, p;

    printf("Digite 10 números inteiros: ");
    
    lerEimprimir(n);

    maiorVetor(n, &maior, &p);
    
    printf("\nMaior número: %d | Posição: %d", maior, p);
}

void lerEimprimir(int n[]){
    for(int i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
}

int maiorVetor(int n[], int *maior, int *p){
    *maior = n[0];
    *p = 0;
    for(int i = 1; i < 10; i++){
        if(n[i] > *maior){
            *maior = n[i];
            *p = i;
        }
    }
}
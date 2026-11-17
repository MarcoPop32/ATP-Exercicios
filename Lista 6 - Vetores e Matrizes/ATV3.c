#include <stdio.h>

void lerVetor(int v[]);
int contarPar(int v[]);

int main(){
    int v[10];

    printf("Digite 10 números inteiros: ");

    lerVetor(v);

    int contador = contarPar(v);
    
    printf("Quantidade de números pares: %d", contador);
}

void lerVetor(int v[]){
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
}

int contarPar(int v[]){
    int cont = 0;

    for(int i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            cont++;
        }
    }

    return cont;
}
#include <stdio.h>

void lerVetor(int v[]);
void negativo (int v[]);

int main(){
    int v[10];

    printf("Digite 10 números inteiros: ");

    lerVetor(v);
    negativo(v);

}

void lerVetor(int v[]){
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
}

void negativo(int v[]){
    
    for(int i = 0; i < 10; i++){
        if(v[i] < 0){
            v[i] = 0;
        }
    }
    printf("Vetor: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
}
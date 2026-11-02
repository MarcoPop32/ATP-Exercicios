#include <stdio.h>


void inverte(int v[], int ini, int fim);

int main(){
    int a, b;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &a);

    int v[a];

    printf("Insira os elementos dentro do vetor: ");
    for(int i = 0; i < a; i++){
        scanf("%d", &v[i]);
    }
    inverte(v, 0, a - 1);

    printf("Vetor invertido: ");
    for(int i = 0; i < a; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void inverte(int v[], int ini, int fim){
    if(ini >= fim){
        return;
    }
    int t = v[ini];
    v[ini] = v[fim];
    v[fim] = t;
    inverte(v, ini + 1, fim - 1);
}
#include <stdio.h>

void armazenarVetor(int v[]);
void vetorImpar(int v[]);

int main(){
    int v[50];

    printf("Digite números inteiros de 0 a 50: ");

    armazenarVetor(v);
    vetorImpar(v);

    return 0;
}

void armazenarVetor(int v[]){
    for(int i = 0; i < 50; i++){
        scanf("%d", &v[i]);
    }

    printf("Resultado: ");
    for(int i = 0; i < 50; i++){
        printf("%d ", v[i]);
    }
}

void vetorImpar(int v[]){
    int p[50];

    printf("\nNúmeros Ímpares: ");
    
    for(int i = 0; i < 50; i++){
        if(v[i] % 2 != 0){
            p[i] = v[i];
            printf("%d ", p[i]);
        }
    }
}
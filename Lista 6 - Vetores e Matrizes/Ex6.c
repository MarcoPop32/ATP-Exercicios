#include <stdio.h>

#define L 4
#define C 5

void lerMatriz(int m[L][C]);
void somarLinhas(int m[L][C], int somaL[L]);
void somarColunas(int m[L][C], int somarC[C]);
int somaTotal(int m[L][C]);
void imprimirMatriz(int m[L][C]);

int main(){
    int m[L][C], somaL[L], somaC[C];
    lerMatriz(m);
    somarLinhas(m, somaL);
    somarColunas(m, somaC);

    printf("\nMatriz:\n");
    imprimirMatriz(m);

    for(int i = 0; i < L; i++){
        printf("Soma da linha %d: %d\n", i + 1, somaL[i]);
    }
    for(int j = 0; j < C; j++){
        printf("Soma da coluna %d: %d\n", j + 1, somaC[j]);
    }
    printf("Soma total: %d\n", somaTotal(m));
    return 0;
}

void lerMatriz(int m[L][C]){
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("m[%d][%d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
}

void somarLinhas(int m[L][C], int somaL[L]){
    for(int i = 0; i < L; i++){
        somaL[i] = 0;
        for(int j = 0; j < C; j++){
            somaL[i] += m[i][j];
        }
    }
}

void somarColunas(int m[L][C], int somarC[C]){
    for(int j = 0; j < C; j++){
        somarC[j] = 0;
        for(int i = 0; i < L; i++){
            somarC[j] += m[i][j];
        }
    }
}
int somaTotal(int m[L][C]){
    int total = 0;
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            total += m[i][j];
        }
    }
    return total;
}

void imprimirMatriz(int m[L][C]){
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
}
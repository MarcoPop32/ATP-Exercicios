#include <stdio.h>

#define ORD 3

void preencherMatriz(int A[ORD][ORD]){
    for(int i = 0; i < ORD; i++){
        for(int j = 0; j < ORD; j++){
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
}

void ordenarMatriz(int A[ORD][ORD]){
    int v[ORD * ORD], k = 0, t;

    for(int i = 0; i < ORD; i++){
        for(int j = 0 ; j < ORD; j++){
            v[k++] = A[i][j];
        }
    }

    for(int i = 0; i < ORD*ORD - 1; i++){
        for(int j = 0; j < ORD*ORD - 1 - i; j++){
            if(v[j] > v[j+1]){
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }

    k = 0;

    for(int i = 0; i < ORD; i++){
        for(int j = 0; j < ORD; j++){
            A[i][j] = v[k++];
        }
    }
}

void matrizPares(int A[ORD][ORD], int B[ORD][ORD]){
    for(int i = 0; i < ORD; i++){
        for(int j = 0; j < ORD; j++){
            B[i][j] = (A[i][j] % 2 == 0) ? A[i][j] : 0;
        }
    }
}

void multiplo5(int A[ORD][ORD], int B[ORD][ORD]){
    for(int i = 0; i < ORD; i++){
        for(int j = 0; j < ORD; j++){
            B[i][j] = (A[i][j] % 5 == 0) ? A[i][j] : 0;
        }
    }
}

void mostrarMatriz(const char *titulo, int A[ORD][ORD]){
    printf("%s:\n", titulo);

    for(int i = 0; i < ORD; i++){
        for(int j = 0; j < ORD; j++){
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[ORD][ORD] = {{0}}, B[ORD][ORD], op;

    do {
        printf("\n1 - Preencher A\n2 - Ordenar A\n3 - Matriz so com pares\n");
        printf("4 - Matriz so com multiplos de 5\n5 - Mostrar A\n0 - Sair\nOpcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1: preencherMatriz(A); break;
            case 2: ordenarMatriz(A); mostrarMatriz("A ordenada", A); break;
            case 3: matrizPares(A, B); mostrarMatriz("Pares", B); break;
            case 4: multiplo5(A, B); mostrarMatriz("Multiplos de 5", B); break;
            case 5: mostrarMatriz("A", A); break;
            case 0: break;
            default: printf("Opcao invalida.\n");
        }
    } while (op != 0);
    return 0;
 
}
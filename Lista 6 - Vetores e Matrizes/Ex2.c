#include <stdio.h>

int contaIterativo(int v[], int n, int x);
int contaRecursivo(int v[], int n, int x);

int main() {
    int n, x;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Digite o elemento a contar: ");
    scanf("%d", &x);

    int resIterativo = contaIterativo(v, n, x);
    int resRecursivo = contaIterativo(v, n, x);

    printf("Contagem Iterativa (uso do for): %d\n", resIterativo);
    printf("Contagem Recursiva: %d\n", resRecursivo);

    if(resIterativo == resRecursivo){
        printf("As duas contagens são iguais.\n");
    }else{
        printf("Os resultados são diferentes.");
    }

    return 0;
}

int contaIterativo(int v[], int n, int x) {
    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            cont++;
        }
    }

    return cont;
}

int contaRecursivo(int v[], int n, int x){
    if(n == 0){
        return 0;
    }
    if(v[n - 1] == x){
        return 1 + contaRecursivo(v, n - 1, x);
    }else{
        return contaRecursivo(v, n - 1, x);
    }
}
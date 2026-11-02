#include <stdio.h>

void inverteVetor(int v[], int ini, int fim){
    if(ini >= fim){
        return;
    }
    int t = v[ini];
    v[ini] = v[fim];
    v[fim] = t;
    inverteVetor(v, ini + 1, fim - 1);
}

// Função auxiliar para manter o código principal limpo e modular
void imprimirVetor(const int v[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d%s", v[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");
}

int main(void) {
    int v_exemplo[] = {7, 3, 9, 1, 5};
    int n_exemplo = 5;

    printf("Original:  ");
    imprimirVetor(v_exemplo, n_exemplo);
    
    inverteVetor(v_exemplo, 0, n_exemplo - 1);
    
    printf("Invertido: ");
    imprimirVetor(v_exemplo, n_exemplo);

}
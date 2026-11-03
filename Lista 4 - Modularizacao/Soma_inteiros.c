#include <stdio.h>

int soma(int n1, int n2){
    long soma = 0;
    int aux;

    if(n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    for(int i = n1; i <= n2; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int n1, n2;
    printf("Digite os valores de n1 e n2: ");
    scanf("%d %d", &n1, &n2);
    printf("Soma do intervalo: %ld\n", soma(n1, n2));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, soma = 0;

    do {
        printf("Digite um valor (0 para sair): ");
        scanf("%d", &n);
        soma += n;
    } while(n != 0);

    system("cls"); // limpa a tela com os valores digitados
    printf("A soma dos números digitados é igual a: %d", soma);

    return 0;
}
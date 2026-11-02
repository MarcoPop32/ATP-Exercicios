#include <stdio.h>

int main() {
    int idade;
    float soma = 0, media = 0;

    for(int i = 0; i <= 20; i++){
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        soma += idade;
    }
    media = soma/20;
    printf("A média das idades é: %.2f", media);
}
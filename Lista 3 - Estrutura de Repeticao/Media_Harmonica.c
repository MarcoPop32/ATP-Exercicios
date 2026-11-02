#include <stdio.h>

int main(){
    int a, b, c;
    float media_harmonica = 0;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("Não é possível calcular média harmônica com valor zero!\n");
        return 1;
    }

    media_harmonica = 1 / ((1.0/a) + (1.0/b) + (1.0/c));

    printf("A média harmônica desses valores é igual a: %.2f", media_harmonica);

    return 0;
}
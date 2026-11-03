#include <stdio.h>

int ehPrimo(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int acharPrimo(int n) {
    int p, achou = 0;
    for (p = 2; p <= n / 2 && !achou; p++) {
        if (ehPrimo(p) && ehPrimo(n - p)) achou = 1;
    }
    return achou ? p - 1 : 0;      /* o for ja somou 1 em p depois de achar */
}

int main(void) {
    int n, p;

    while (1) {
        printf("Digite um numero par maior que 2 (negativo para encerrar): ");
        scanf("%d", &n);
        if (n < 0) break;
        if (n <= 2 || n % 2 != 0) {
            printf("  Precisa ser par e maior que 2.\n");
            continue;
        }
        p = acharPrimo(n);
        if (p == 0) printf("  Nenhum par encontrado para %d\n", n);
        else printf("  %d = %d + %d  (%d e %d sao primos)\n", n, p, n - p, p, n - p);
    }
    return 0;
}
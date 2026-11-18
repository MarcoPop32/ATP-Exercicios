#include <stdio.h>
#include <string.h>
#define N 5
#define T 40

void le_linha(char s[], int tam) {
    fgets(s, tam, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void ordena(char m[][T], int n) {
    char tmp[T];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (strcmp(m[j], m[j + 1]) > 0) {
                strcpy(tmp, m[j]);
                strcpy(m[j], m[j + 1]);
                strcpy(m[j + 1], tmp);
            }
}

int busca(char m[][T], int n, const char x[]) {
    for (int i = 0; i < n; i++)
        if (strcmp(m[i], x) == 0)
            return i;
    return -1;
}

int main(void) {
    char nomes[N][T], procura[T];
    for (int i = 0; i < N; i++) {
        printf("Nome %d: ", i + 1);
        le_linha(nomes[i], T);
    }
    ordena(nomes, N);
    for (int i = 0; i < N; i++)
        printf("%d. %s\n", i + 1, nomes[i]);

    le_linha(procura, T);
    while (strcmp(procura, "fim") != 0) {
        int p = busca(nomes, N, procura);
        if (p >= 0) printf("Posicao %d\n", p + 1);
        else        printf("Nao encontrado\n");
        le_linha(procura, T);
    }
    return 0;
}
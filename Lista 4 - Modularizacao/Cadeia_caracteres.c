#include <stdio.h>
#include <string.h>

void centraliza(char texto[]) {
    int i, esp = (80 - (int)strlen(texto)) / 2;
    for (i = 0; i < esp; i++) putchar(' ');
    printf("%s\n", texto);
}

int main(void) {
    char texto[100];
    printf("Texto (ate 60 caracteres): ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    if (strlen(texto) > 60) texto[60] = '\0';
    centraliza(texto);
    return 0;
}

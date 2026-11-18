#include <stdio.h>
#include <string.h>

int main(void) {
    char linha[100], msg[100];
    double a, b, r;
    char op;
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        linha[strcspn(linha, "\n")] = '\0';
        if (strcmp(linha, "fim") == 0)
            break;
        if (sscanf(linha, "%lf %c %lf", &a, &op, &b) != 3)
            snprintf(msg, sizeof(msg), "entrada invalida");
        else if (op == '/' && b == 0)
            snprintf(msg, sizeof(msg), "divisao por zero");
        else {
            switch (op) {
                case '+': r = a + b; break;
                case '-': r = a - b; break;
                case '*': r = a * b; break;
                case '/': r = a / b; break;
                default:  r = 0;
            }
            if (op == '+' || op == '-' || op == '*' || op == '/')
                snprintf(msg, sizeof(msg), "%g %c %g = %g", a, op, b, r);
            else
                snprintf(msg, sizeof(msg), "operador '%c' desconhecido", op);
        }
        puts(msg);
    }
    return 0;
}
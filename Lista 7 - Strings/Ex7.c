#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int meu_atoi(const char s[]) {
    int i = 0, sinal = 1, n = 0;
    while (isspace(s[i]))
        i++;
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sinal = -1;
        i++;
    }
    while (isdigit(s[i])) {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return sinal * n;
}

int main(void) {
    char t[4][12] = {"  -42abc", "+7", "abc", "2026"};
    for (int k = 0; k < 4; k++)
        printf("\"%s\": meu = %d, atoi = %d\n", t[k], meu_atoi(t[k]), atoi(t[k]));
    return 0;
}
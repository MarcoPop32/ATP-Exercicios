#include <stdio.h>
#include <ctype.h>

void cesar(char s[], int k) {
    k = ((k % 26) + 26) % 26;      /* aceita k negativo */
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i]))
            s[i] = 'A' + (s[i] - 'A' + k) % 26;
        else if (islower(s[i]))
            s[i] = 'a' + (s[i] - 'a' + k) % 26;
    }
}

int main(void) {
    char msg[] = "Ataque ao IFAM!";
    cesar(msg, 3);
    puts(msg);                     /* Dwdtxh dr LIDP! */
    cesar(msg, -3);
    puts(msg);                     /* Ataque ao IFAM! */
    return 0;
}
#include <stdio.h>

int Letra(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= "Z");
}

int main(){
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    printf("Letra(%c): %d\n", c, Letra(c));
    return 0;
}
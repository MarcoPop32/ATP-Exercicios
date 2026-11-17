#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 200

void capitaliza(char s[]);

int main(){
    char exemplo[] = "maRIA da SILVA";
    printf("Antes: \"%s\"\n", exemplo);
    capitaliza(exemplo);
    printf("Depois: \"%s\"\n", exemplo);

    char frase[MAX];
    printf("\nDigite outra frase para capitalizar: ");
    if(fgets(frase, MAX, stdin) != NULL){
        frase[strcspn(frase, "\n")] = '\0';
        capitaliza(frase);
        printf("Resultado: \"%s\"\n", frase);
    }

    return 0;
}

void capitaliza(char s[]){
    int inicio = 1;

    for(int i = 0; s[i] != '\0'; i++){
        unsigned char c = (unsigned char)s[i];
        if(isspace(c)){
            inicio = 1;
        }else{
            if(inicio){
                s[i] = (char)toupper(c);
                inicio = 0;
            }else{
                s[i] = (char)tolower(c);
            }
        }
    }
}


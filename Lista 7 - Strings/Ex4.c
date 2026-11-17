#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

void limpa(const char orig[], char dest[]);
int pal(const char s[], int ini, int fim);
void verificarFrase(const char frase[]);


int main(){
    verificarFrase("Socorram-me, subi no onibus em Marrocos");
    verificarFrase("Anotaram a data da maratona");
    verificarFrase("Estrutura de Dados em C");

    char entrada[MAX];
    printf("\nDigite uma frase para testar: ");
    if(fgets(entrada, MAX, stdin) != NULL){
        entrada[strcspn(entrada, "\n")] = '\0';
        verificarFrase(entrada);
    }

    return 0;
}

void limpa(const char orig[], char dest[]){
    int j = 0;

    for(int i = 0; orig[i] != '\0'; i++){
        unsigned char c = (unsigned char)orig[i];
        if(isalnum(c)){
            dest[j++] = (char)tolower(c);
        }
    }

    dest[j] = '\0';
}

int pal(const char s[], int ini, int fim){
    if(ini >= fim){
        return 1;
    }
    if(s[ini] != s[fim]){
        return 0;
    }

    return pal(s, ini + 1, fim - 1);
}

void verificarFrase(const char frase[]){
    char tratada[MAX];
    limpa(frase, tratada);
    int n = (int)strlen(tratada);
    int resultado = (n == 0) ? 1 : pal(tratada, 0, n-1);

    printf("Frase: \"%s\"\n", frase);
    printf("Limpa: \"%s\" -> %s\n\n", tratada, resultado ? "PALINDROMO" : "NÃO É PALINDROMO");
}



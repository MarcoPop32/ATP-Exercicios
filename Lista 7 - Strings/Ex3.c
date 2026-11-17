#include <stdio.h>
#include <string.h>

#define MAX 100

void inverter(char s[], int ini, int fim);
void demonstrarInversao(const char original[]);

int main(){
    char palavra[MAX];

    demonstrarInversao("amor");
    demonstrarInversao("recursao");
    demonstrarInversao("arara");

    printf("\nDigite uma palavra ou frase para inverter: ");
    if(fgets(palavra, MAX, stdin) != NULL){
        palavra[strcspn(palavra, "\n")] = '\0';
        int n = (int)strlen(palavra);
        if(n > 0){
            inverter(palavra, 0, n-1);
        }
        printf("Invertida: \"%s\"\n", palavra);
    }

    return 0;
}

void inverter(char s[], int ini, int fim){
    if(ini >= fim){
        return;
    }
    char temp = s[ini];
    s[ini] = s[fim];
    s[fim] = temp;

    inverter(s, ini + 1, fim - 1);
}

void demonstrarInversao(const char original[]){
    char buf[MAX];
    strcpy(buf, original);
    int n = (int)strlen(buf);
    if(n > 0){
        inverter(buf, 0, n-1);
    }
    printf("\"%s\" -> \"%s\"\n", original, buf);
}
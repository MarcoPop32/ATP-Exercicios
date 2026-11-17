#include <stdio.h>
#include <string.h>


int tamanho(const char s[]);
void teste(const char s[]);

int main(){
    const char *testes[] = {
        "",
        "C",
        "IFAM",
        "Manaus",
        "Algoritmo e Programacao"
    };

    int qntd = sizeof(testes) / sizeof(testes[0]);

    printf("%-28s | %-10s | %-10s\n", "String", "tam() rec", "strlen()");
    printf("------------------------------------------------------------\n");
    for(int i = 0 ; i < qntd; i++){
        teste(testes[i]);
    }
    return 0;
}

int tamanho(const char s[]){
    if(s[0] == '\0'){
        return 0;
    }
    return 1 + tamanho(&s[1]);
}

void teste(const char s[]){
    printf("\"%-26s\" | %-10d | %-10zu\n", s, tamanho(s), strlen(s));
}
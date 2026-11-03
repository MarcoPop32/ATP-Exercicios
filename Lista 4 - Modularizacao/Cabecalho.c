#include <stdio.h>
#include <string.h>

void cabecalho(char nome[]){
    printf("============================================\n");
    printf("Universidade Virtual do Aprendizado\n");
    printf("ICEx - Instituto de Ciencias Exatas\n");
    printf("Disciplina de Programacao de Computadores\n");
    printf("Nome:\n%s\n", nome);
    printf("============================================\n");
}

int main(){
    char nome[100];
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    cabecalho(nome);

    return 0;
}
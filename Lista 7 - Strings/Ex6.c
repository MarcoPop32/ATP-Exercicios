#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int senha_forte(const char s[]);
void fazerLeitura(void);


int main(){
    fazerLeitura();
    return 0;
}

int senha_forte(const char s[]){
    if(strlen(s) < 8){
        return 0;
    }

    int temMaiusc = 0;
    int temMinusc = 0;
    int temDigito = 0;
    int temSimbolo = 0;

    for(int i = 0; s[i] != '\0'; i++){
        unsigned char c = (unsigned char)s[i];
        if(isupper(c)){
            temMaiusc = 1;
        }else if(islower(c)){
            temMinusc = 1;
        }else if(isdigit(c)){
            temDigito = 1;
        }else if(ispunct(c)){
            temSimbolo = 1;
        }
    }

    return temMaiusc && temMinusc && temDigito && temSimbolo;
}

void fazerLeitura(void){
    char senha[MAX];

    printf("Digite uma senha válida(digite 'fim' para encerrar): ");
    while(1){
        printf("> ");
        if(fgets(senha, MAX, stdin) == NULL){
            break;
        }

        senha[strcspn(senha, "\n")] = '\0';

        if(strcmp(senha, "fim") == 0){
            printf("Encerrando programa.\n");
            break;
        }

        if(senha_forte(senha)){
            printf("[FORTE] Senha atende todos os critérios.\n");
        }else{
            printf("[FRACA] Precisa de >= 8 chars, maiuscula, minuscula, dígito e símbolo.\n");
        }

    }
}
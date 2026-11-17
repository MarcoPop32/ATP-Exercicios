#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 256

void lerFrase(char s[], int max);
int vogal(char c);
void raio_x(const char s[], int cont[]);
void exibir(const int cont[]);

int main(){
    char frase[MAX];
    int cont[4] = {0, 0, 0, 0};
    
    lerFrase(frase, MAX);
    raio_x(frase, cont);
    exibir(cont);

    return 0;
}

void lerFrase(char s[], int max){
    printf("Digite uma frase: ");
    if(fgets(s, max, stdin) != NULL){
        s[strcspn(s, "\n")] = '\0';
    }
}

int vogal(char c){
    char lower = (char)tolower((unsigned char)c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

void raio_x(const char s[], int cont[]){
    for(int i = 0; i < 4; i++){
        cont[i] = 0;
    }

    for(int i = 0; s[i] != '\0'; i++){
        unsigned char c = (unsigned char)s[i];
        if(isalpha(c)){
            if(vogal(s[i])){
                cont[0]++;
            }else{
                cont[1]++;
            }
        }else if(isdigit(c)){
            cont[2]++;
        }else if(isspace(c)){
            cont[3]++;
        }
    }
}

void exibir(const int cont[]){
    printf("\n-----Raio X------\n");
    printf("Total de letras: %d (vogais: %d | consoantes: %d)", cont[0] + cont[1], cont[0], cont[1]);
    printf("\nDigitos: %d\n", cont[2]);
    printf("Espacos: %d\n", cont[3]);
}
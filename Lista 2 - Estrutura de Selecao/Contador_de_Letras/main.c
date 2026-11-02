#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

//Mesma coisa de antes

int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa
    //Declaração de variaveis
    char frase[500];
    int contador = 0;

    //Entrada dos dados
    printf("Escreva uma frase: ");
    fgets(frase, sizeof(frase), stdin); //Faz a leitura da frase completa

    //Laço de repetição
    for(int i = 0; frase[i] != '\0'; i++){ //Condição de repetição
        if(!isspace(frase[i]) && (i == 0 || isspace(frase[i-1]))){ //Verifica se o caractere atual não é espaço, ou o anterior é espaço ou que está no ínicio da frase
            contador++;
        }
    }
    //Saida
    printf("A quantidade de palavras na frase é %d", contador);


    return 0;
}

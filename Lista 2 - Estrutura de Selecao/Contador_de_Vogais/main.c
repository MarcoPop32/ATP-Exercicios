#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

//Não fazia ideia de como desenvolver o programa sem utilizar um laço de repetição, então consultei o Claude para auxiliar no código.

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
        char letra = tolower(frase[i]); //Converte as letras em minúscula

        if(strchr("aeiou", letra) != 0){ //Comparação entre as vogais com letra
            contador++;
        }
    }
    //Saida
    printf("A quantidade de vogais na frase é %d", contador);


    return 0;
}

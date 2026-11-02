#include <stdio.h>
#include <string.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração das variáveis
    char frase[500];
    char palavra[] = "aula";
    int contador = 0;

    //Entrada dos dados
    printf("Escreva uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    char *ponteiro = frase; //vai pegar o char que está no endereço apontado que é frase

    //Laço de repetição
    while((ponteiro = strstr(ponteiro, palavra)) != 0){  //Comparação entre chars
        contador++;
        ponteiro += strlen(palavra); //Toda vez que a condição for satisfeira, o ponteiro continua a busca após a última
    }

    //Saída de Dados
    printf("A palavra aula apareceu %d vez(es)\n", contador);


    return 0;
}

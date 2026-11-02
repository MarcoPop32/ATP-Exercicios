#include <stdio.h>

int main() {
    int numero, resto = 0, inverso = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    //Laço de repetição para inversão do número
    while(numero != 0){ 
        resto = numero % 10; //Pega o último dígito que é o resto da divisão por 10
        inverso = inverso*10+resto; //Empilha esse dígito no resultado
        numero = numero/10; //Remove o último digito do número 
    }
    printf("O inverso do número digitado é: %d", inverso);
}
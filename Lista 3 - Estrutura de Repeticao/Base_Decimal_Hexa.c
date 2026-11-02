#include <stdio.h>

int main(){
    char letra;
    int n, decimal = 0;

    printf("Digite um número hexadecimal (0-9 número, A-F letra): ");

    while((letra = getchar()) != '\n'){
        if(letra >= '0' && letra <= '9'){
            n = letra-'0';
        }else if(letra >= 'A' && letra <= 'F'){
            n = letra-'A'+10;
        }else if(letra >= 'a' && letra <= 'f'){
            n = letra-'a'+10;
        }else{
            continue;
        }
        decimal = decimal*16+n;
    }

    printf("A conversão para decimal é igual a: %d", decimal);

    return 0;
}
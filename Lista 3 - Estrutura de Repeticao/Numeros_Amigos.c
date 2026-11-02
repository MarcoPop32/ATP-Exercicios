#include <stdio.h>

int main(){
    int n1, n2, divisores1 = 0, divisores2 = 0;;

    printf("Digite um número para ver se ele é um número amigo: ");
    scanf("%d", &n1);

    printf("Digite o segundo número para ver se ele é um número amigo: ");
    scanf("%d", &n2);

    for(int i = 1; i < n1; i++){
        if(n1 % i == 0){
            divisores1 += i;
        }
    }

    for(int i = 1; i < n2; i++){
        if(n2 % i == 0){
            divisores2 += i;
        }
    }

    if(divisores1 == n2 && divisores2 == n1){
        printf("Os números %d e %d são amigos.", n1, n2);
    }else{
        printf("Os números %d e %d não são amigos.", n1, n2);
    }

    return 0;
}
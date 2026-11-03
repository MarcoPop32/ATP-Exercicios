#include <stdio.h>

int lerNumero(int n1, int n2){
    int n;
    while(1){
        printf("Digite um número entre %d e %d: ", n1, n2);
        scanf("%d", &n);
        if(n >= n1 && n <= n2){
            return n;
        }
        printf("Numero inválido. Digite novamente!\n");
    }
}

void tabuada(int n){
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main(){
    tabuada(lerNumero(2,10));
    return 0;
}
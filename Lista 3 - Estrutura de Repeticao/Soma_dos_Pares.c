#include <stdio.h>

int main(){
    int somapar = 0;

    for(int i = 1; i <= 500; i++){
        if(i % 2 ==0){
            somapar += i;
        }
    }
    printf("A soma dos valores pares entre 1 e 500 é igual a: %d", somapar);
    return 0;
}
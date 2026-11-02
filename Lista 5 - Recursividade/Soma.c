#include <stdio.h>

int soma(int n){
    if(n == 0){
        return 0;
    }
    return n + soma(n - 1);
}

int main(){
    printf("Soma (4): %d\n", soma(4));
    printf("Soma (0): %d\n", soma(0));
}
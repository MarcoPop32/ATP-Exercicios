#include <stdio.h>

int multiplicacao(int n1, int n2){
    if(n2 == 0){
        return 0;
    }
    return n1 + multiplicacao(n1, n2 - 1);
}

int main(){
    printf("Multiplicacao(4,3): %d\n", multiplicacao(4,3));
}
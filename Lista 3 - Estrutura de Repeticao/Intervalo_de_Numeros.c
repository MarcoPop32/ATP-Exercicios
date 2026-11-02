#include <stdio.h>


int main(){
    int n1 = 100, n2 = 200;

    printf("Os números ímpares entre 100 e 200 são:\n ");
    for(int i = 101; i <= 200; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }

    return 0;
}
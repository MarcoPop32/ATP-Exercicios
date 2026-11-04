#include <stdio.h>

int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    for(n = 1; n <= 20; n++){
        printf("Fib(%d) = %d\n", n, fib(n));
    }
    return 0;
}
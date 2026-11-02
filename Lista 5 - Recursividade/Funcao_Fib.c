#include <stdio.h>

long long memo[100];

long long fib(int n){
    if(n <= 1){
        return n;
    }
    if(memo[n] != -1){
        return memo[n];
    }

    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(){
    for(int i = 0; i < 100; i++){
        memo[i] = -1;
    }
    printf("fib(0) = %lld\n", fib(0));
    printf("fib(1) = %lld\n", fib(1));
    printf("fib(10) = %lld\n", fib(10));
    printf("fib(50) = %lld\n", fib(50));

    return 0;
}
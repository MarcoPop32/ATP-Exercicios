#include <stdio.h>

long long fatorial(int n){
    long long f = 1;

    if(n < 0 || n > 20){
        return -1;
    }
    for(int i = 2; i <= n; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;

    printf("Digite um número para calcular seu fatorial: ");
    scanf("%d", &n);
    printf("%d! = %lld\n", n, fatorial(n));

    return 0;
}
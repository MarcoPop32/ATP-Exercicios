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

long long arranjo(int n, int p){
    long long a, b;
    if(n < 0 || p < 0 || p > n){
        return -1;
    }
    a = fatorial(n);
    b = fatorial(n-p);

    if(a == -1 || b == -1){
        return -1;
    }
    return a / b;
}

int main(){
    int n, p;
    printf("Valor de n e p: ");
    scanf("%d %d", &n, &p);

    printf("A(%d, %d) = %lld\n", n, p, arranjo(n,p));

    return 0;
}
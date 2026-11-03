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

long long combinacao(int n, int p){
    long long a, b, c;
    if(n < 0 || p < 0 || p > n){
        return -1;
    }

    a = fatorial(n);
    b = fatorial(p);
    c = fatorial(n-p);

    if(a == -1 || b == -1 || c == -1){
        return -1;
    }

    return a / (b*c);
}

int main(){
    int n, p;

    printf("Digite os valores de n e p: ");
    scanf("%d %d", &n, &p);

    printf("C(%d, %d)= %lld\n", n, p, combinacao(n, p));

    return 0;
}
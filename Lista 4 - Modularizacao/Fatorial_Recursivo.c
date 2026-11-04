#include <stdio.h>

long long fatorial(int n){
    if(n < 0 || n > 20){
        return -1;
    }
    if(n == 0){
        return 1;
    }

    return n * fatorial(n-1);
}

int main(){
    int n;
    long long f;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    f = fatorial(n);

    if(f == -1){
        printf("Não foi possível calcular o fatorial.\n");
    }else{
        printf("%d! = %lld\n", n, f);
    }

    return 0;
}
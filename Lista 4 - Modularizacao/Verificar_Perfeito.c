#include <stdio.h>

int primo(long long n){
    long long i;

    if(n < 2){
        return 0;
    }
    
    for(i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
}

void primeirosPerfeitos(long long A[]){
    int achados = 0, p = 2;
    long long mersenne;
    
    while(achados < 5){
        mersenne = (1LL << p) - 1;

        if(primo(mersenne)){
            A[achados] = (1LL << (p-1)) * mersenne;
            achados++;
        }
        p++;
    }
}

int main(){
    long long A[5];

    primeirosPerfeitos(A);

    printf("Os 5 primeiros números perfeitos: ");
    
    for(int i = 0; i < 5; i++){
        printf("%lld", A[i]);
    }
    printf("\n");

    return 0;
}
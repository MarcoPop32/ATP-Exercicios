#include <stdio.h>


int main(){
    int n, a, produto;

    printf("Digite um número para verificar se é triangular pelo produto de três números consecutivos: ");
    scanf("%d", &n);

    a = 1;
    produto = a*(a+1)*(a+2);

    while(produto < n){
        a++;
        produto = a * (a+1) * (a+2);
    }

    if(produto == n){
        printf("%d x %d x %d = %d. É triangular!", a, a+1, a+2, produto);
    }else{
        printf("%d não é triangular.", n);
    }


    return 0;
}
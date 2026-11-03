#include <stdio.h>

int Max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int a, b, c, d;

    for(int i = 1; i <= 4; i++){
        printf("Serie %d (a, b, c e d): ", i);
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf(" Maior = %d\n", Max(Max(a,b), Max(c,d)));
    }
    return 0;
}
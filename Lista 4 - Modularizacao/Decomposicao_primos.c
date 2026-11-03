#include <stdio.h>

int divisivel(int x, int y){
    if(y == 0){
        return 0;
    }
    return (x / y) * y == x;
}

int regular(int n){
    if(n < 1){
        return 0;
    }
    while(divisivel(n, 2)){
        n /= 2;
    }
    while(divisivel(n, 3)){
        n /= 3;
    }
    while(divisivel(n, 5)){
        n /= 5;
    }

    return n == 1;
}

int main(){
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    printf("Regular(%d) = %d\n", n, regular);
    return 0;
}
#include <stdio.h>

int mdc(int x, int y){
    if(x <= 0 || y <= 0){
        return -1;
    }
    if(x == y){
        return x;
    }
    if(x > y){
        return mdc(x - y, y);
    }
    return mdc(y, x);
}

int main(){
    int x, y, r;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &x, &y);

    r = mdc(x,y);

    if(r == -1){
        printf("Digite valores inteiros positivos.\n");
    }else{
        printf("MDC(%d, %d) = %d\n", x, y, r);
    }

    return 0;
}
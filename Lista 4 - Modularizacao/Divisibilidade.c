#include <stdio.h>

int divisivel(int a, int b){
    if(b == 0){
        return 0;
    }
    return (a / b) * b == a;
}

int vezesDivisivel(int x, int y){
    int cont = 0;
    if(y == 0 || x == 1 || y == -1 || x == 0){
        return -1;
    }
    while(divisivel(x,y)){
        x /= y;
        cont++;
    }
    return cont;
}

int main(){
    int x, y;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    printf("%d é divisível por %d %d vezes.\n", x, y, vezesDivisivel(x,y));

    return 0;
    
}
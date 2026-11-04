#include <stdio.h>
#include <math.h>

int resto(int x, int y){
    if(y == 0){
        return -1;
    }
    x = abs(x);
    y = abs(y);

    if(x < y){
        return x;
    }
    if(x == y){
        return 1;
    }

    return resto(x - y, y);
}

int main(){
    int x, y, r;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    r = resto(x,y);

    if(r == -1){
        printf("Não é possível divisão por zero.\n");
    }else{
        printf("Resto de %d por %d é igual a: %d", x, y, r);
    }

    return 0;
}
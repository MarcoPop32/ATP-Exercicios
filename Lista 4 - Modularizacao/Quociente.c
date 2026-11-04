#include <stdio.h>
#include <math.h>

int divisao(int x, int y){
    if(y == 0){
        return -1;
    }
    x = abs(x);
    y = abs(y);

    if(x < y){
        return 0;
    }
    if(x == y){
        return 1;
    }

    return 1 + divisao(x - y, y);
}

int main(){
    int x, y, q;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    q = divisao(x, y);

    if(q == -1){
        printf("Não é possível dividir por zero.\n");
    }else{
        printf("Quociente de %d por %d = %d\n", x, y, q);
    }

    return 0;
}
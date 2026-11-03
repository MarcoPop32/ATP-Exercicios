#include <stdio.h> 

int divisivel(int x, int y){
    if(y == 0){
        return 0;
    }
    return (x / y) * y == x;
}

int main(){
    int x, y;
    printf("X e Y: ");
    scanf("%d %d", &x, &y);
    printf("Divisivel(%d e %d): %d", x, y, divisivel(x, y));

    return 0;
}
#include <stdio.h> 

void hanoi(int n, char origem, char destino, char auxiliar){
    if(n == 0){
        return;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("Mova o disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);
}

int main(){
    printf("Hanoi(1):\n");
    hanoi(1, 'A', 'C', 'B');

    printf("Hanoi(2):\n");
    hanoi(2, 'A', 'C', 'B');

    printf("Hanoi(3):\n");
    hanoi(3, 'A', 'C', 'B');
}
#include <stdio.h>

void maiorMenor(int a, int b, int c, int *maior, int *menor){
    *maior = a;
    *menor = a;

    if(b > *maior){
        *maior = b;
    }
    if(c > *maior){
        *maior = c;
    }
    if(b < *menor){
        *menor = b;
    }
    if(c < *menor){
        *menor = c;
    }

}

int main(){
    int a, b, c, maior, menor;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    maiorMenor(a, b, c, &maior, &menor);
    printf("Maior número = %d | Menor número = %d\n", maior, menor);

    return 0;
}
#include <stdio.h>


int main(){
    int n1 = 480, n2 = 10;
    float soma = 0;
    int sinal = 1; 

    for(int i = 1; i <= 30; i++){
        soma += (float)(n1*sinal) / n2;

        n1 -= 5;
        n2++;
        sinal *= -1;
    }

    printf("Somatório: %.2f", soma);

}
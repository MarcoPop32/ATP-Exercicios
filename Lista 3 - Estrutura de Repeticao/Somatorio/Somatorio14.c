#include <stdio.h>
#include <math.h>

int main(){
    double n1 = 63, n2 = 1;
    int i = 1;
    double soma = 0;
    double termo;

    do{
        termo = n1 / n2;
        soma += termo;
        n1 -= 2; 
        n2 *= i;
        i++;
    }while(fabs(termo) >= 0.0000001);

    printf("Somatório: %.4f\n", soma);
    printf("Quantidade de termos: %d", i - 1);

    return 0;
}
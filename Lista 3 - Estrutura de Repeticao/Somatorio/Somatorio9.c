#include <stdio.h>
#include <math.h>


int main(){
    double n1 = 4, valor_absoluto, soma = 0;
    int n2 = 1; 
    int sinal = 1; 

    do{
        valor_absoluto = (n1*sinal) / n2;
        soma += valor_absoluto;
        n2 += 2;
        sinal *= -1;
    }while(fabs(valor_absoluto) >= 0.0001);

    printf("Valor aproximado de pi: %.4f", soma);
    return 0;
}
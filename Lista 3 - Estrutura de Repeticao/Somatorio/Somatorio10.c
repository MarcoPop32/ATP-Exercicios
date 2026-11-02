#include <stdio.h>
#include <math.h>


int main(){
    double n1 = 1, soma = 0;
    double pi;
    int sinal = 1;

    for(int i = 1; i <= 51; i++){
        soma += (1.0*sinal) / pow(n1,3); 
        n1 += 2;
        sinal *= -1;
    }
    pi = cbrt(soma*32);

    printf("Valor de pi: %.4f", pi);


    return 0;
}
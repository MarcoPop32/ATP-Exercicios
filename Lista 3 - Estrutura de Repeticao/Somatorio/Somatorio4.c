#include <stdio.h>


int main(){
    int n1 = 0;
    float soma = 0;
    int sinal;

    for(int i = 1; i <= 10; i++){
        n1++;
         if(n1 % 2 == 0){
            sinal = -1;
        }else{
            sinal = 1;
        }
        soma += (float)(n1*sinal)/(i*i);

  
    }

    printf("Somatorio: %.2f", soma);

    return 0;
}
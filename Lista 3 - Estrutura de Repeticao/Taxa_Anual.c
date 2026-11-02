#include <stdio.h>


int main(){
    float A = 90000000.0, B = 200000000.0;
    float cont = 0.0;

    do{
        A += A*0.03;
        B += B*0.015;
        cont++; 
    }while(A < B);
    printf("Anos: %.2f", cont);
    
    return 0;
}
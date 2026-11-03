#include <stdio.h>

int divMod(int a, int b, int *div, int *mod){
    if(b == 0){
        return -1;
    }
    *div = a / b;
    *mod = a % b;
    return 0;
}

int main(){
    int a, b, q, r;

    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    
    if(divMod(a, b, &q, &r) == -1){
        printf("Não foi possível dividir.\n");
    }else{
        printf("Quociente = %d | Resto = %d", q, r);
    }

    return 0;

}
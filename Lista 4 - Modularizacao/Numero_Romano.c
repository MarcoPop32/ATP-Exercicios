#include <stdio.h>
#include <string.h>

void imprimeRomano(int n){
    const char *dez[6] = {"", "X", "XX", "XXX", "XL", "L"};
    const char *uni[10] = {"", "I", "II", "III", "IV", "V",
    "VI", "VII", "VIII", "IX"};

    if(n < 1 || n > 50){
        printf("Número fora do intervalo.\n");
    }else{
        printf("%s%s\n", dez[n / 10], uni[n % 10]);
    }
}

int main(){
    int n;
    printf("Numero (1 a 50): ");
    scanf("%d", &n);
    imprimeRomano(n);
}
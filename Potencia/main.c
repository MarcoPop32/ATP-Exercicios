#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    int n1, n2, pot = 0;

    printf("Insira o valor da base: ");
    scanf("%d", &n1);
    printf("Insira o valor do expoente: ");
    scanf("%d", &n2);

    pot = pow(n1,n2);

    printf("O valor de %d elevado a %d é igual a: %d", n1, n2, pot);

 return 0;
}

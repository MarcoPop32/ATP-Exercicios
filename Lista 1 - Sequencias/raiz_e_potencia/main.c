#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    int n1, pot = 0, rad = 0;

    printf("Insira um número: ");
    scanf("%d", &n1);

    rad = sqrt(n1);

    printf("A raíz desse número é igual a: %d\n", rad);

    pot = pow(n1,2);

    printf("A potência desse número é igual a: %d", pot);



 return 0;
}

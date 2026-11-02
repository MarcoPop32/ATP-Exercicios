#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    int base, Base, altura, raio, pi = 3.14;
    int triangulo = 0, quadrado = 0, circulo = 0, trapezio = 0, retangulo = 0, losango = 0;

    printf("Insira o valor da base: ");
    scanf("%d", &base);
    printf("Insira o valor da altura: ");
    scanf("%d", &altura);
    printf("Insira o valor da base maior: ");
    scanf("%d", &Base);
    printf("Insira o valor do raio: ");
    scanf("%d", &raio);

    triangulo = (base*altura)/2;
    quadrado = base*base;
    circulo = pi*raio;
    trapezio = ((base+Base)*altura)/2;
    retangulo = base*altura;
    losango = 2*base*altura;

    printf("\nA área do triângulo é igual a: %d\n", triangulo);
    printf("A área do quadrado é igual a: %d\n", quadrado);
    printf("A área do círculo é igual a: %d\n", circulo);
    printf("A área do trapézio é igual a: %d\n", trapezio);
    printf("A área do retângulo é igual a: %d\n", retangulo);
    printf("A área do losango é igual a: %d\n", losango);


 return 0;
}

#include <stdio.h>

int main(){
    int n1 = 1000;
    float soma = 0;
    int sinal = 1; // O primeiro termo da imagem é positivo

    for(int i = 1; i <= 50; i++){
        soma += (float)(n1 * sinal) / i;

        // 2. Prepara as variáveis para a próxima repetição
        n1 -= 3;
        sinal *= -1; // Inverte o sinal (+, -, +, -...)
    }

    printf("Somatorio: %.4f\n", soma);

    return 0;
}
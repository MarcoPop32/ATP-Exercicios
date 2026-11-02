#include <stdio.h>


int main(){
    float n, cont = 0, c_negativo = 0, c_positivo = 0, acm = 0, media = 0;

    do{
        printf("Digite um número (0 para sair): ");
        scanf("%f", &n);

        if(n != 0){
        acm += n;
        cont++;

        if(n < 0){
            c_negativo++;
        }
        if(n > 0){
            c_positivo++;
        }
    }
    }while(n != 0);

    media = acm/cont;

    printf("\nMédia Aritmética dos números registrados: %.2f\n", media);
    printf("Quantidade de números positivos: %.f\n", c_positivo);
    printf("Quantidade de números negativos: %.f\n", c_negativo);
    printf("Percentual de Negativos: %.2f%%\nPercentual de Positivos: %.2f%%", (c_negativo*100)/cont, (c_positivo*100)/cont);

    return 0;
}
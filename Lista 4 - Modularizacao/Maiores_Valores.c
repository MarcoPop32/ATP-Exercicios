#include <Stdio.h>

void segundoQuarto(double v[], double *segundo, double *quarto){
    double aux[5], t;

    for(int i = 0; i < 5; i++){
        aux[i] = v[i];
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(aux[j] < aux[j + 1]){
                t = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = t;
            }
        }
    }
    *segundo = aux[1];
    *quarto = aux[3]; 
}

int main(){
    double v[5], s, q;

    printf("Digite cinco números: ");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &v[i]);
    }
    segundoQuarto(v, &s, &q);
    printf("2° maior Valor = %.2f || 4° Maior valor = %.2f\n", s, q);

    return 0;
}
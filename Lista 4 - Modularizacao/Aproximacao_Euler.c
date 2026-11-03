#include <stdio.h>
#include <math.h>

double aproximacaoEuler(int termos){
    double e = 1.0, termo = 1;

    for(int i = 1; i <= termos; i++){
        termo /= i;
        e += termo;
    }
    return e;
}

int main(){
    int t = 1;
    while(fabs(aproximacaoEuler(t) - exp(1.0)) >= 0.0001){
        printf("%d termos -> %.6f\n", t, aproximacaoEuler(t));
        t++;
    }
    printf("%d termos -> %.6f (diferença menor que 0.0001)", t, aproximacaoEuler(t));
    return 0;
}

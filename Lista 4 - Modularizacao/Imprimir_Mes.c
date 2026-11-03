#include <stdio.h>

void imprimeMes(int n){
    const char *meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho"
    "agosto", "setembro", "outubro", "novembro", "dezembro"};
    if(n < 1 || n > 12){
        printf("Erro: número de mês inválido.\n");
    }else{
        printf("%s\n", meses[n-1]);
    }
}

int main(){
    int n;
    printf("Numero do mes: ");
    scanf("%d", &n);
    imprimeMes(n);
    
    return 0;
}
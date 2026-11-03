#include <stdio.h>

void imprimirExtenso(int n){
    const char *nomes[11] = {"Zero", "Um", "Dois", "Três", "Quatro", "Cinco"
    , "Seis", "Sete", "Oito", "Nove", "Dez"};

    if(n < 0 || n > 10){
        printf("Erro: Número fora do intervalo (0 a 10)\n");
    }else{
        printf("%s\n", nomes[n]);
    }
}

int main(){
    int n;
    printf("Digite um número (0 a 10): ");
    scanf("%d", &n);

    imprimirExtenso(n);

    return 0;
}
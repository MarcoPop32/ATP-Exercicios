#include <stdio.h>

int main(){
    int n1, n2, primeiro, segundo, primo;

    printf("Digite o valor do primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o valor do segundo número: ");
    scanf("%d", &n2);

    if(n1 < n2){
        primeiro = n1;
        segundo = n2;
    }else{
        primeiro = n2;
        segundo = n1;
    }

    printf("Números primos entre %d e %d:\n", primeiro, segundo);

    for(int i = primeiro; i <= segundo; i++){
        
        if(i <= 1){
            continue;
        }
        primo = 1;

        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }

        if(primo){
            printf("%d ", i); 
        }
    }

    printf("\n");

    return 0;
}
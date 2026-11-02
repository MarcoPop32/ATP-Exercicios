#include <stdio.h>


int main(){
    int n, flag = -1, cont1 = 0, cont2 = 0;

    while(n != flag){
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n >= 10 && n <= 20){
            cont1++;
        }else{
            cont2++;
        }
    }
    if(cont1 > 0){
        printf("A quantidade de números no intervalo [10,20] é de %d\n", cont1);
    }
    printf("A quantidade fora do intervalo [10,20] é de %d", cont2);


    return 0;
}
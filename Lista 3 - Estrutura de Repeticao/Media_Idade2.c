#include <stdio.h>

int main() {
    //Declaração das variáveis
    int idade, cont = 0, flag = -1;     
    float media = 0, soma = 0;

    //Laço de repetição para receber as idades
    for(int i = 0; i <= cont; i++){
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if(idade != flag){
            soma += idade;
            cont++;
        }else if(idade == flag){ //Condição de parada do loop
            break;
        }
    }
    if(cont > 0){ //Caso o usuário tenha informado alguma idade 
        media = soma/cont;
        printf("A media das idades é igual a: %.2f", media);
    }else{ //Caso o usuário digite -1 no ínicio, para não fazer divisão por zero.
        printf("Nenhuma idade foi informada.");
    }
    return 0;
}

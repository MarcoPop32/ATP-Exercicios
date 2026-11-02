#include <stdio.h>

int main(){
    //Declaração das variáveis
    float altura;
    float media = 0, acm = 0;
    char sexo; 

    //Laço de repetição 
    for(int i = 0; i <= 50; i++){
        printf("Digite a altura da pessoa: ");
        scanf("%f", &altura);
        printf("Digite o sexo da pessoa (M/F): ");
        scanf(" %c", &sexo);

        //Condição para acumular altura apenas das mulheres
        if(sexo == 'F' || sexo == 'f'){
            acm += altura;
        }

    }
    //Caso tenha pelo menos uma mulher, calcular a média
    if(acm > 0){
        media = acm/50;
        printf("A media das alturas das mulheres é: %.2f", media);
    }else{
        printf("Nenhuma mulher foi informada.");
    }

}
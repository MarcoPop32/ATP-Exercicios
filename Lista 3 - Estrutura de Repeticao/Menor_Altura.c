#include <stdio.h>

int main() {
    //Declaração das variáveis
    float altura, menor, maior;
    int soma = 0, cont = 0, flag = 0;

    //Laço de repetição 
    for(int i = 0; i <= cont; i++){
        //Entrada de dados
        printf("Digite a altura da pessoa em metros: ");
        scanf("%f", &altura);

        //Condição de parada do laço
        if(altura != flag){ 
            soma += altura;
            cont++; 
        }else if(altura == flag){ 
            break; //Interrupção do laço
        }
        if(cont == 1){ //Para o primeiro contador, armazena os valores de maior e menor para comparação
            maior = altura;
            menor = altura;
        }
        if(altura < menor){ //Pega o menor valor dos que foram armazenados
            menor = altura;
        }
    }
    if(cont > 0){ //Se houver pelo menos uma altura informada, exibe a menor altura
    printf("A menor altura infomada é: %.2f", menor);
    }else{ //Caso ele insira 0 logo no início do laço
        printf("Nenhuma altura foi informada.");
    }
    return 0;
}
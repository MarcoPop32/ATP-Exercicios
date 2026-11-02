#include <stdio.h>

int main(){
    //Declaração das Variáveis
    int n, primeiroImpar, impar, soma = 0;

    //Entrada de dados
    printf("Digite um número para calcular esse número elevado ao cubo: ");
    scanf("%d", &n);

    //Processamento 
    primeiroImpar = (n*n)-n+1; //Fórmula para o primeiro termo 
    impar = primeiroImpar; //Impar armazena esse primeiro valor 

    printf("%d^3 = ", n);

    //Laço de repetição para a soma dos termos a partir do primeiro termo
    for(int i = 1; i <= n; i++){
        soma += impar;
        if(i < n){
            printf("%d + ", impar); //Exibe os valores que estão somando caso i seja menor que n 
        }else{
            printf("%d ", impar); //Caso seja igual, exibe o último termo 
        }
        impar += 2; //Pula para o próximo termo impar
    }

    //Saída dos dados
    printf(" = %d", soma);

    return 0;
}
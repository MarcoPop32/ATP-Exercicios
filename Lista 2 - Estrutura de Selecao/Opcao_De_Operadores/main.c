#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variável
    int opcoes;

    //Entrada de dados para escolha de uma das opções
    printf("Digite o número de uma das opções abaixo:\n [1]- Somar\n [2]- Raíz Quadrada\n [3]- Finalizar\n");
    scanf("%d", &opcoes);

    //Condição de saída
    if(opcoes == 1){
        int num1, num2;
        printf("\nInsira o valor do primeiro operador: ");
        scanf("%d", &num1);
        printf("Insira o valor do segundo operador: ");
        scanf("%d", &num2);

        printf("A soma dos dois números é igual a: %d", num1+num2);


    }else if(opcoes == 2){
        int numb, raiz = 0;

        printf("\nInsira um número para calcular sua raíz quadrada: ");
        scanf("%d", &numb);

        raiz = sqrt(numb);

        printf("Sua raíz quadrada é igual a: %d", raiz);
    }else if(opcoes == 3){
        printf("\nFim.");
    }else{ //Caso o número escolhido não seja uma das opções dada
        printf("\nErro! Digite uma opção válida.");
    }


    return 0;
}

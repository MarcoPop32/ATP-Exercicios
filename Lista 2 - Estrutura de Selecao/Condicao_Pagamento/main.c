#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração das variáveis
    float preco_produto, valor_pago;
    int codigo;

    //Entrada dos dados
    printf("Insira o valor do produto: ");
    scanf("%f", &preco_produto);

    printf("Indique a forma de pagamento de acordo com a tabela:\n [1]- À vista\n [2]- À vista no cartão\n [3] - Parcelado em 2x (sem juros)\n [4]- Parcelado em 3x (juros 10 porcento)\n:");
    scanf("%d", &codigo);

    //Condição de Saída
    if(codigo == 1){
        valor_pago = preco_produto*0.9;
        printf("\nO valor pago foi de R$%.2f", valor_pago);
    }else if(codigo == 2){
        valor_pago = preco_produto*0.95;
        printf("\nO valor pago foi de R$%.2f", valor_pago);
    }else if(codigo == 3){
        valor_pago = preco_produto/2;
        printf("\nO valor das parcelas em 2x é de R$%.2f", valor_pago);
    }else if(codigo == 4){
        valor_pago = (preco_produto+(preco_produto*0.1))/3;
        printf("\nO valor das parcelas em 3x com juros é de R$%.2f", valor_pago);
    }

    return 0;
}

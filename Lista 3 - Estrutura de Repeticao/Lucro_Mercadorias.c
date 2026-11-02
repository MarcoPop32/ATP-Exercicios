#include <stdio.h> 

int main(){
    float valor_compra, valor_venda, lucro, lucro_total = 0;
    float compra_total = 0, venda_total = 0;
    float perc_lucro;
    int cont1 = 0, cont2 = 0, cont3 = 0;

    do{
        printf("Digite o valor da compra do produto: ");
        scanf("%f", &valor_compra);

        printf("Digite o valor de venda do produto(-1 para sair):\n ");
        scanf("%f", &valor_venda);

        if(valor_venda != -1){
        lucro = valor_venda-valor_compra;

        perc_lucro = (lucro*valor_venda)/100;

        if(perc_lucro < 1){
            cont1++;
        }
        if(perc_lucro >= 0.1 && perc_lucro <= 0.2){
            cont2++;
        }
        if(perc_lucro > 0.2){
            cont3++;
        }

        compra_total += valor_compra;
        venda_total += valor_venda;
        lucro_total += lucro;
        }
        
    }while(valor_venda != -1);

    if(cont1 > 0 || cont2 > 0 || cont3 > 0){
    printf("\nValor total de compras: R$%.2f\n", compra_total);
    printf("Valor total de vendas: R$%.2f\n", venda_total); 
    printf("Lucro total: R$%.2f\n", lucro_total);
    printf("\nMercadorias que lucraram:\nEntre 10%% e 20%% - %d\nMais de 20%% - %d\nMenos de 100%% - %d", cont2, cont3, cont1);
        }else{
        printf("Não foi registrado nenhuma mercadoria.");
        }

    return 0;
}
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração das variáveis
    float preco;
    int codigo_produto;

    //Entrada de dados
    printf("Insira o valor do produto em R$: ");
    scanf("%f", &preco);

    printf("Insira o código do produto: ");
    scanf("%d", &codigo_produto);

    //Condição de saída
    if(codigo_produto == 1){
        printf("Preço: R$%.2f - produto do Sul", preco);
    }else if(codigo_produto == 2){
        printf("Preço: R$%.2f - produto do Norte", preco);
    }else if(codigo_produto == 3){
        printf("Preço: R$%.2f - produto do Leste", preco);
    }else if(codigo_produto == 4){
        printf("Preço: R$%.2f - produto do Oeste", preco);
    }else if(codigo_produto >= 5 && codigo_produto <= 6){
        printf("Preço: R$%.2f - produto do Nordeste", preco);
    }else if(codigo_produto >= 7 && codigo_produto <= 9){
        printf("Preço: R$%.2f - produto do Sudeste", preco);
    }else if(codigo_produto >= 10 && codigo_produto <= 20){
        printf("Preço: R$%.2f - produto do Centro-Oeste", preco);
    }else if(codigo_produto >= 21 && codigo_produto <= 30){
        printf("Preço: R$%.2f - produto do Nordeste", preco);
    }else{
        printf("Preço: R$%.2f - origem desconhecida", preco);
    }


    return 0;
}

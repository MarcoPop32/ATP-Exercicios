#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração de variável
    int n1, n2;

    //Entrada de dados
    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    //Condição de saída
    if(n1 > n2){
        printf("Menor número: %d", n2);
    }else{
    printf("Menor número: %d", n1);
    }

    return 0;
}

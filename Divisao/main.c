#include <stdio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    //Declaração das variáveis
    int n1, n2, divisao;

    //Entrada dos dados
     printf("Insira o valor do 1° operador: ");
     scanf("%d", &n1);
     printf("Insira o valor do 2° operador: ");
     scanf("%d", &n2);

     //Processamento
     divisao = n1/n2;

     //Saída dos dados
     printf("A divisão dos primeiro número pelo segundo é igual a: %d", divisao);

 return 0;

}

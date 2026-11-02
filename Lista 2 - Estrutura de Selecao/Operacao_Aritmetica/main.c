#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração das variáveis
    int n1, n2;
    char operador;
    float resultado = 0;

    //Entrada dos Dados
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &operador);

    //Condição de Saída
    if (operador == '+') {
        resultado = n1 + n2;
        printf("Resultado: %d + %d = %.2f\n", n1, n2, resultado);
    } else if (operador == '-') {
        resultado = n1 - n2;
        printf("Resultado: %d - %d = %.2f\n", n1, n2, resultado);
    } else if (operador == '*') {
        resultado = n1 * n2;
        printf("Resultado: %d * %d = %.2f\n", n1, n2, resultado);
    } else if (operador == '/') {
        if (n2 == 0) { //Caso o usuário digite 0 para n2 durante a divisão
            printf("Erro: divisão por zero não é permitida!\n");
        } else {
            resultado = n1 / n2;
            printf("Resultado: %d / %d = %.2f\n", n1, n2, resultado);
        }
    } else {
        printf("Operação inválida!\n");
    }

    return 0;
}

#include <stdio.h>

int menu(void){
    int op;
    printf("\n**********************************************************************\n");
    printf("* Calculadora Simples. Opcoes possiveis:\n");
    printf("* 1. Adicao\n* 2. Subtracao\n* 3. Multiplicacao\n* 4. Divisao\n* 5. Sair do programa\n");
    printf("**********************************************************************\n");
    printf("Entre com sua opcao: ");
    scanf("%d", &op);
    return op;
}

double adicao(double a, double b){
    return a + b;
}

double subtracao(double a, double b){
    return a - b;
}

double multiplicacao(double a, double b){
    return a * b;
}

double divisao(double a, double b){
    return a / b;
}

int main(){
    int op;
    double a, b;

    do{
        op = menu();
        if(op < 1 || op > 5){
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }
        if(op == 5){
            break;
        }
        scanf("%lf %lf", &a, &b);

        switch(op){
            case 1:
            printf("Resultado = %.2f\n", adicao(a,b));
            break;
            case 2:
            printf("Resultado = %.2f\n", subtracao(a,b));
            break;
            case 3:
            printf("Resultado = %.2f\n", multiplicacao(a,b));
            break;
            case 4:
            if(b == 0){
                printf("Não existe divisão por zero.\n");
            }else{
                printf("Resultado = %.2f\n", divisao(a,b));
            }
            break;
        }
    }while(op != 5);
    return 0;
}
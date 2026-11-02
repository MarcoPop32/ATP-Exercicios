#include <stdio.h>

#define MESES 12
#define MOTORES 2

const int cl[MOTORES][2] = { {10, 3},
{15, 2}
};

void lerProducao(int prod[MESES][MOTORES]){
    for(int m = 0; m < MESES; m++){
        for(int k = 0; k < MOTORES; k++){
            printf("Mes %d - producao do motor M%d: ", m + 1, k + 1);
            scanf("%d", &prod[m][k]);
        }
    }
}

int custoMes(int prod[MESES][MOTORES], int mes){
    int custo = 0;
    for(int k = 0; k < MOTORES; k++){
        custo += prod[mes][k] * cl[k][0];
    }
    return custo;
}

int lucroMes(int prod[MESES][MOTORES], int mes){
    int custo = 0;
    for(int k = 0; k < MOTORES; k++){
        custo += prod[mes][k] * cl[k][1];
    }
    return custo;
}

int main(){
    int prod[MESES][MOTORES];
    int custo[MESES], lucro[MESES];

    int totalCusto = 0, totalLucro = 0;


    lerProducao(prod);

    printf("\n%-5s %-12s %-12s\n", "Mes", "Custo", "Lucro");
    for(int m = 0; m < MESES; m++){
        custo[m] = custoMes(prod, m);
        lucro[m] = lucroMes(prod, m);
        totalCusto += custo[m];
        totalLucro += lucro[m];
        printf("%-5d %-12d %-12d\n", m + 1, custo[m], lucro[m]);
    }
    printf("\nTotal do ano: custo = %d mil | lucro = %d mil\n", totalCusto, totalLucro);
    return 0;
}

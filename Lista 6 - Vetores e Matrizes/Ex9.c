#include <stdio.h>

#define VOOS 37
#define FIM 9999

void lerLugares(int lugares[]){
    for(int i = 0; i < VOOS; i++){
        printf("Lugares do voo %d: ", i + 1);
        scanf("%d", &lugares[i]);
    }
}

int reserva(int lugares[], int voo){
    if(lugares[voo - 1] > 0){
        lugares[voo - 1]--;
        return 1;
    }
    return 0;
}

void processarPedidos(int lugares[]){
    int id, voo;

    printf("\nIdentidade do cliente (%d para terminar): ", FIM);
    scanf("%d", &id);
    while(id != FIM){
        printf("Numero do voo (1 a %d): ", VOOS);
        scanf("%d", &voo);

        if(voo < 1 || voo > VOOS){
            printf("Voo invalido!\n");
        }else if(reserva(lugares, voo)){
            printf("Reserva CONFIRMADA para o cliente %d no voo %d!\n", id, voo);
        }else{
            printf("Voo %d lotado: não há lugar para o cliente %d\n", voo, id);
        }
        printf("\nIdentidade do cliente (%d para terminar): ", FIM);
        scanf("%d", &id);
    }
}

void lugaresVagos(int lugares[]){
    printf("\n--- Lugares vagos ---\n");
    for(int i = 0; i < VOOS; i++){
        printf("Voo %2d: %d\n", i + 1, lugares[i]);
    }
}

int main(){
    int lugares[VOOS];

    lerLugares(lugares);
    processarPedidos(lugares);
    lugaresVagos(lugares);

    return 0;
}
#include <stdio.h>
#include <ctype.h>

char lerSN(void){
    char c;
    while(1){
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &c);
        c = toupper(c);

        if(c == 'S' || c == 'N'){
            return c;
        }
        printf("Caracter inválido. Digite novamnete\n");
    }
}

int main(){
    double n;
    do{
        printf("Numero: ");
        scanf("%lf", &n);
        printf("Cubo = %.2f\n", n*n*n);
    }while(lerSN() == 'S');
    
    return 0;
}
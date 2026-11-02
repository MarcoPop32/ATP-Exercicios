#include <stdio.h>

int main(){
    float m_inicial, m_final = 0.5;
    int cont = 0;

    printf("Digite a massa inicial da substância: ");
    scanf("%f", &m_inicial);

    do{
        m_inicial -= m_inicial * 0.5;
        cont += 50;

    } while(m_inicial > m_final);

    int horas = cont / 3600;
    int minutos = (cont % 3600) / 60;
    int segundos = cont % 60;

    if(horas == 0 && minutos == 0){
        printf("Levou %d segundos para chegar até 0.5g.\n", segundos);
    } else if(horas == 0 && minutos > 0){
        printf("Levou %d minuto(s) e %d segundo(s).\n", minutos, segundos);
    } else {
        printf("Levou %d hora(s), %d minuto(s) e %d segundo(s).\n", horas, minutos, segundos);
    }

    return 0;
}
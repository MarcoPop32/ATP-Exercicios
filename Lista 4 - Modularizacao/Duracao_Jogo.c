#include <stdio.h>

void duracaoJogo(int hIni, int mIni, int hFim, int mFim, int *horas, int *minutos){
    int ini = hIni * 60 + mIni;
    int fim = hFim * 60 + mFim;
    int dur;

    if(fim <= ini){
        fim += 24*60;
    }
    dur = fim - ini;

    *horas = dur / 60;
    *minutos = dur % 60;
}

int main(){
    int hi, mi, hf, mf, h, m;

    printf("Ínicio do jogo (horas-minutos): ");
    scanf("%d %d", &hi, &mi);

    printf("Término do jogo (horas-minutos): ");
    scanf("%d %d", &hf, &mf);

    duracaoJogo(hi, mi, hf, mf, &h, &m);

    printf("Duração do jogo: %d hora(s) e %d minuto(s)\n", h, m);

    return 0;
}
#include <stdio.h>

int main(){
    int f;
    float c;

    printf("Fahrenheit\tCentígrados\n");

    for(f = 50; f <= 150; f++){
        c = (5.0/9.0) * (f - 32);
        printf("%d°F\t\t%.2f°C\n", f, c);
    }

    return 0;
}
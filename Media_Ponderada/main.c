#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    //Declaração das variáveis
    int n1, n2, n3, p1, p2, p3, media = 0;

    printf("Insira o valor das notas 1, 2 e 3 do aluno: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Insira o valor do peso das notas 1, 2 e 3: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

   printf("A media do aluno foi: %d", media);


 return 0;
}

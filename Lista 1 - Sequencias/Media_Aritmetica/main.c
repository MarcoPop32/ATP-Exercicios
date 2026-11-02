#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    //Declaração das variáveis
    int n1, n2, n3, media;

    printf("Insira o valor das notas 1, 2 e 3 do aluno: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

   printf("A media do aluno foi: %d", media);


 return 0;
}

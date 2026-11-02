#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese"); // Localização da língua portuguese

    //Declaração das variáveis
   int salario, salario_minimo = 0;

   printf("Indique o valor do seu salario: ");
   scanf("%d", &salario);

   salario_minimo = salario/1600;

   printf("Você ganha %d salário(s) mínimo.", salario_minimo);


 return 0;
}

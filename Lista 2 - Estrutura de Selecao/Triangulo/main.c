#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua

    //Declaração das variáveis
   int A, B, C;

   //Entrada de dados
   printf("Insira o valor dos lados A, B e C do triângulo: ");
   scanf("%d %d %d", &A, &B, &C);

   //Condição de Saída
   if((A < B+C) && (B < A+C) && (C < A+B)){
    if((A == B) && (B == C)){
        printf("O triângulo é equilatéro.");
    }else{
    if((A == B) || (B == C) || (A == C)){
        printf("O triângulo é isósceles.");
    }else{
    if((A != B) && (B != C)){
        printf("O triângulo é escaleno.");
    }
   }
   }
   }else{ //Caso a condição inicial não seja satisfeita
   printf("Os lados não formam um triângulo.");
          }

return 0;
}

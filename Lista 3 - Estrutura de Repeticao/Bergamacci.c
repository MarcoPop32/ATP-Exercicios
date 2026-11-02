#include <stdio.h>

int main() {
  //Declaração das variáveis
  int t1 = 1, t2 = 1, t3 = 1,ptermo;
  int N;


  //Entrada dos dados
  printf("Digite um valor para achar N termos da sequência de Bergamacci: ");
  scanf("%d", &N);

  printf("A sequência de Bergamacci até o %d° termo é: ", N);
  //Laço de repetição para imprimir os termos da sequêncai de Bergamacci
  for(int i = 1; i <= N; i++){
    printf("%d ", t1);
    ptermo = t1+t2+t3;
    t1 = t2;
    t2 = t3;
    t3 = ptermo;
  }

    return 0;
}
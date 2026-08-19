#include <stdio.h>

int main()
{
  float n1, n2, subtracao;

  printf("Insira o valor do primeiro operando: ");
  scanf("%f", &n1);
  printf("Insira o valor do segundo operando: ");
  scanf("%f", &n2);

  subtracao = n1-n2;

  printf("A subtração dos dois números é igual a: %.2f", subtracao);

  return 0;

}

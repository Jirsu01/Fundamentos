#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.
NUM: variable de tipo entero. */

int main(void) {
  int NUM;
  printf("Ingrese un número entero: ");
  scanf("%d", &NUM);
  if (NUM == 0)
    printf ("\nNulo");
  else
    if (pow (-1, NUM) > 0)
      printf("\nPar");
    else
      printf("\nImpar");
  return 0;
}
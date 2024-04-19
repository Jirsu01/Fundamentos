#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

int main(void) {
  int NUM;
  long CUA, SUC = 0;
  printf("\nIngrese un numero entero -0 para terminar-:\t");
  scanf("%d", &NUM);
  while (NUM)
    /* Observa que la condición es verdadera mientras el entero es diferente de cero. */
    {
      CUA = pow(NUM, 2);
      printf("%d al cubo es %ld\n", NUM, CUA);
      SUC = SUC + CUA;
      printf("\nIngrese un numero entero -0 para terminar-:\t");
      scanf("%d", &NUM);
    }
  printf("\nLa suma de los cuadrados es %ld\n", SUC);
  return 0;
}
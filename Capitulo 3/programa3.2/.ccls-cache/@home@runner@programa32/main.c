#include <stdio.h>

/* Suma positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los enteros positivos.
I, N, NUM, SUM: variables de tipo entero. */

int main(void) {
  int I, N, NUM, SUM;
  SUM = 0;
  printf("Ingrese el numero de datos:\t");
  scanf("%d", &N);
  for (I = 1; I <= N; I++)
    {
      printf("Ingrese un número %d:\t", I);
      scanf("%d", &NUM);
      if (NUM > 0)
        SUM = SUM + NUM;
    }
  printf("La suma de los números positivos es: %d", SUM);
  return 0;
}
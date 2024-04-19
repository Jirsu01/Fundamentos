#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un número entero.
FAC, I, NUM: variables de tipo entero. */

int main(void) {
  int I, NUM;
  long FAC;
  printf("Ingrese un número entero: ");
  scanf("%d", &NUM);
  if (NUM >= 0)
  {
    FAC = 1;
    for (I = 1; I <= NUM; I++)
      FAC *= I;
    printf("El factorial de %d es %ld\n", NUM, FAC);
  }
  else
    printf("\nError en el dato ingresado");
  return 0;
}
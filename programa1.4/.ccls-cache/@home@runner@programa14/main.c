#include <stdio.h>
/* Superficie del triángulo.
El programa, al recibir como datos la base y la altura de un triángulo, calcula su superficie.
BAS, ALT y SUP: variables de tipo real. */

int main(void) {
  float BAS, ALT, SUP;
  printf("Ingrese la base y la altura del triángulo: ");
  scanf( "%f %f", &BAS, &ALT);
  SUP = BAS * ALT / 2;
  printf( "\nLa superficie es: %5.2f", SUP);
}
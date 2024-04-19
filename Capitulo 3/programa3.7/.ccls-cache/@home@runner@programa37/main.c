#include <stdio.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio de los lanzamientos de la atleta cubana.
I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

int main(void) {
  int I, N;
  float LAN, SLA = 0;
  do
    {
      printf("Ingrese el número de lanzamientos: ");
      scanf( "%d", &N );
    }
    while ( N < 1 || N > 11 );
  /* Se utiliza la estructura do-while para verificar que el valor de N sea correcto. */
  for ( I = 1; I <= N; I++ )
    {
      printf("Ingrese el lanzamiento %d: ", I);
      scanf( "%f", &LAN );
      SLA = SLA + LAN;
    }
  SLA = SLA / N;
  printf("El promedio de los lanzamientos es: %f", SLA);
  return 0;
}
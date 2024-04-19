#include <stdio.h>

/* Elección.
El programa almacena los votos emitidos en una elección en la que hubo cinco
➥candidatos e imprime el total de votos que obtuvo cada uno de ellos. */

int main(void) {
  int ELE[5] = {0}; /* Declaración del arreglo entero EELLEE de cinco elementos. 
  Todos sus elementos inicializan en 0.*/
  int I, VOT;
  printf("Ingresa el primer voto (0 - para terminar): ");
  scanf("%d", &VOT);
  while (VOT)
    {
      if ((VOT > 0) && (VOT < 6)) /* Se verifica que el voto sea correcto. */
        ELE[VOT - 1]++; /* Los votos se almacenan en el arreglo.
      ➥Recuerda que la primera posición del arreglo es 0, por esa razón a la
      ➥variable VVOOTT se le descuenta 1. Los votos del primer candidato se
      ➥almacenan en la posición 0. */
      else
        printf("Voto inválido.\n");
      printf("Ingresa el siguiente voto (0 - para terminar): ");
      scanf( "%d", &VOT);
    }
  printf("\nResultados de la eleccion:\n");
  for ( I = 0; I <= 4; I++)
    printf( "Candidato %d: %d votos\n", I + 1, ELE[I]);
}
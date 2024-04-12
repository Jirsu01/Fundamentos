#include <stdio.h>

/* Cuenta-números.
El programa, al recibir como datos un arreglo unidimensional de tipo
➥entero y un número entero, determina cuántas veces se encuentra el
➥número en el arreglo. */

int main(void)
{
  int I, NUM, CUE = 0;
  int ARRE[10];   /* Declaración del arreglo */
  for (I = 0; I < 10; I++)
    {
      printf("Ingrese el elemento %d del arreglo: ", I + 1);
      scanf("%d", &ARRE[I]);  /* Lectura -asignación— del arreglo */
    }
  printf("\nIngrese el numero que se va a buscar en el arreglo: ");
  scanf("%d", &NUM);
  for (I = 0; I < 10; I++)
    if (ARRE[I] == NUM)  /* Comparación del número con los elementos del arreglo */
      CUE++;
  printf( "\nEl numero %d se encuentra %d veces en el arreglo.", NUM, CUE);
}
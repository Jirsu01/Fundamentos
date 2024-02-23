#include <stdio.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros números naturales con la ayuda de una función y utilizando parámetros por valor. */
int cubo(int);   /*Prototipo de función. El parámetro es de tipo entero. */

int main(void) {
  int I;
  for (I = 1; I <= 10; I++)
    printf("\nEl cubo de I es: %d", cubo(I));
           /* Llamada a la función cubo. El paso del parametro es por valor. */
}
int cubo(int K)    /* K es un parametro por valor de tipo entero */
/* La función calcula el cubo de K y devuelve el resultado */
{
  return (K * K * K);
}
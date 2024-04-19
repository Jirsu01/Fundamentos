#include <stdio.h>

/* Incremento de salario.
El programa, al recibir como dato el nivel de un profesor, incrementa su salario en función de la tabla 2.3.
NIV: variable de tipo entero.
SAL: variables de tipo real. */

int main(void) {
  float SAL;
  int NIV;
  printf("Ingrese el nivel del profesor: ");
  scanf( "%d", &NIV);
  printf( "Ingrese el salario del profesor: ");
  scanf( "%f", &SAL);
  switch (NIV)
    printf( "Ingrese el salario : %f", SAL);
  scanf( "%f", &SAL);
  switch(NIV)
    {
      case 1: SAL = SAL * 1.035; break;
      case 2: SAL = SAL * 1.041; break;
      case 3: SAL = SAL * 1.048; break;
      case 4: SAL = SAL * 1.053; break;
    }
  printf("\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL);
  return 0;
}
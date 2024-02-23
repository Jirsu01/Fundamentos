#include <stdio.h>

/* Lluvias.
El programa permite calcular el promedio mensual de las lluvias caídas en
➥ tres regiones importantes del país. Determina también cuál es la región
➥ con mayor promedio de lluvia anual. */

void Mayor(float, float, float); /* Prototipo de función. */

void main(void)
{
  int I;
  float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
  for (I = 1; I <= 12; I++)
    {
      printf("\nIngrese las lluvias del mes %d" , I);
      printf("\nRegiones Golfo, Pacifico y Caribe: ");
      scanf( "%f %f %f", &GOL, &PAC, &CAR);
      AGOL += GOL;
      APAC += PAC;
      ACAR += CAR;
    }
  printf("\nPromedio de lluvias Region Golfo: %f", AGOL / 12);
  printf("\nPromedio de lluvias Region Pacifico: %f", APAC / 12);
  printf("\nPromedio de lluvias Region Caribe: %f", ACAR / 12);
  Mayor(AGOL, APAC, ACAR);
  /* Se llama a la función Mayor. Paso de parámetros por valor. */
}

void Mayor(float R1, float R2, float R3)
/* Esta función obtiene la región con mayor promedio de lluvia anual. */
{
  if (R1 > R2)
    if (R1 > R3)
      printf("\nRegion con mayor promedio: Region Golfo. Promedio: %f", R1 / 12);
    else
      printf("\nRegion con mayor promedio: Region Caribe. Promedio: %f", R3 / 12);
  else
    if (R2 > R3)
      printf("\nRegion con mayor promedio: Region Pacifico. Promedio: %f", R2 / 12);
  else
      printf("\nRegion con mayor promedio: Region Caribe. Promedio: %f", R3 / 12);
}
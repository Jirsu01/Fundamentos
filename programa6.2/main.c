#include <stdio.h>

/* Suma matrices.
El programa, al recibir como datos dos arreglos bidimensionales del mismo
➥tamaño, calcula la suma de ambos y la almacena en un tercer arreglo
➥bidimensional. */

const int MAX = 50;

/* Prototipo de funciones. */
void Lectura(int [][MAX], int, int);
void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);
void Impresion(int [][MAX], int, int);

int main(void)
{
  int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
  /* Declaración de los tres arreglos */
  int FIL, COL;
  do
  {
    printf("Ingrese el número de filas de los arreglos: ");
    scanf(" %d", &FIL);
  }
    while (FIL > MAX || FIL < 1);
  /* Se verifica que el número de filas sea correcto. */
  do
    {
      printf("Ingrese el número de columnas de los arreglos: ");
      scanf( " %d", &COL);
    }
    while (COL > MAX || COL < 1);
  /* Se verifica que el número de columnas sea correcto. */
  printf("\nLectura del Arreglo MA\n");
  Lectura(MA, FIL, COL);
  printf("\nLectura del Arreglo MB\n");
  Lectura(MB, FIL, COL);
  Suma (MA, MB, MC, FIL, COL);
  printf( "\nImpresión del Arreglo MC\n");
  Impresion(MC, FIL, COL);
}

void Suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)
/* La función Suma se utiliza para sumar los arreglos y almacenar el resultado
➥en un tercer arreglo bidimensional. */
{
  int I, J;
  for (I = 0; I < F; I++)
    for (J = 0; J < C; J++)
      printf("\nElemento %d %d: ", I, J);
}
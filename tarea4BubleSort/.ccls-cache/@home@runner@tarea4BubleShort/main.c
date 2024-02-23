#include <time.h>

#define ARRAY_SIZE 10

int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;

int main(int argc, char *argv[])
{
  //inicio generacion de numeros
  seed = 0;
  srand(time(&seed));
  n = sizeof(a) / sizeof(*a);
  for (i = 0; i < n-1; i++)
    {
      a[i] = rand() % 1000;
    }
  //fin generacion de numeros

  for (i = 0; i <= n-1; i++)
    {
      printf("Element a[%d]:%d\n",i,a[i]);
    }
  /*inicio algoritmo BubleSort*/
  change = 1; //se establece la variante "change" en 1.
  while (change == 1) //se inicia un bucle while mientras la condicion sea verdadera.
    {
      change = 0; //se establece la variante "change" en 0, si sigue valiendo 0 al pasar por el "for", el bucle termina.
      for(i = 0; i <= n-2; i++) //Se inicia un bucle que recorre todos los numeros, marca el numero actual como el mas pequeño y compara con el siguiente.
        {
          if (a[i] > a[i+1]) //Comprueba si el numero actual es mayor al siguiente, si es asi, se intercambian.
          {
            buf = a[i];//se guarda el numero actual en la variable "buf".
            a[i] = a[i+1];//se guarda el numero siguiente en la posicion actual.
            a[i+1] = buf;//se guarda el numero actual en la posicion siguiente.
            change = 1;//se establece la variante "change" en 1, para que el bucle se repita.
          }          
        }
    }
  /*fin algoritmo*/
  printf("\n-------------------\n");
  for (i = 0; i <= n-1; i++)//sirve para imprimir los numeros arreglados.
    {
      printf("Element a[%d]:%d\n",i,a[i]);
    }
  return 0;
}

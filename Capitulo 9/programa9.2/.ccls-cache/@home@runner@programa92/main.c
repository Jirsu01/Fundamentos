#include <stdio.h>

int main(void) {
  char p1;
  FILE *ar;
  if ((ar = fopen("arc.txt", "r")) != NULL)
    while (!feof(ar))
      {
        p1 = fgetc(ar);
        putchar(p1);
      }
  else
    printf("No se puede abrir el archivo");
}
#include <stdio.h>
#include <ctype.h>

void minymay(FILE *);

int main(void)
{
  char p;
  FILE *ar;
  if ((ar = fopen("arc5.txt", "r")) != NULL)
  {
    minymay(ar);
    fclose(ar);
  }
  else 
    printf("No se pudo abrir el archivo");
}

void minymay(FILE *arc)
{
  int min = 0, may = 0;
  char p;
  while (!feof(arc))
    {
      p = fgetc(arc);
      if (islower(p))
        min++;
      else 
        if (isupper(p))
          may++;
    }
  printf("\nNumero de minusculas: %d", min);
  printf("\nNumero de mayusculas: %d", may);
}
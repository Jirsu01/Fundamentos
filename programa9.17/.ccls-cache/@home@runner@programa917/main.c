#include <stdio.h>
#include <ctype.h>
#include <string.h>

void cambio(FILE *, FILE *);

int main(void)
{
  FILE *ar;
  FILE *ap;
  ar = fopen("arc.txt", "r");
  ap = fopen("arc1.txt", "w");
  if ((ar != NULL) && (ap != NULL))
  {
    cambio(ar, ap);
    fclose(ar);
    fclose(ap);
  }
  else
    printf("No se pueden abrir los archivos");
}

void cambio(FILE *ap1, FILE *ap2)
{
  int i, j, k;
  char cad[30], cad1[30], *cad2, aux[30];
  while (!feof(ap1))
    {
      fgets(cad, 30, ap1);
      strcpy(cad1, cad);
      cad2 = strstr(cad1, "mexico");

      while(cad2!=NULL)
        {
          cad2[0]='M';
          i = strlen(cad1);
          j = strlen(cad2);
          k = i - j;

          if (k)
          {
            strncpy(aux, cad1, k);
            aux[k] = '\0';
            strcat(aux, cad2);
            strcpy(cad1, aux);
          }
          else
            strcpy(cad1, cad2);
          cad2 = strstr(cad1, "mexico");
        }
      fputs(cad1, ap2);
    }
}
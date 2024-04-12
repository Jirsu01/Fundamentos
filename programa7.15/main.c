#include <stdio.h>
#include <ctype.h>

void interpreta(char *);

int main(void)
{
  char cad[50];
  printf("\nIngrese la cadena de caracteres: ");
  gets(cad);
  interpreta(cad);
}

void interpreta(char *cadena)
{
  int i = 0, j, k;
  while (cad[i] != '\0')
    {
      if (isalpha(cad[i]))
      {
        k = cad[i - 1] - 48;
        for (j = 0; j < k; j++)
          putchar(cad[i]);
      }
      i++;
    }
}
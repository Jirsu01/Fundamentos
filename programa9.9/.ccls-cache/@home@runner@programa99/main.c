#include <stdio.h>

typedef struct {
int matricula;
char nombre[20];
int carrera;
float promedio;
}alumno;

void lee(FILE *);

int main(void)
{
  FILE *ar;
  if((ar = fopen("ad1.dat","r")) != NULL)
    lee(ar);
  else
    printf("\nEl archivo no se puede abrir");
  fclose(ar);
}

void lee(FILE *ap)
{
  alumno alu;

  fread(&alu, sizeof(alumno), 1, ap);

  while(!feof(ap))
    {
      printf("\nMatricula: %d", alu.matricula);
      printf("\tCarrera: %d", alu.carrera);
      printf("\tPromedio: %f", alu.promedio);
      puts(alu.nombre);
      fread(&alu, sizeof(alumno), 1, ap);
    }
}
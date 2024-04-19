#include <stdio.h>

typedef struct
{
int clavel;
char nombre[20];
int carrera;
float promedio;
float examen;
char telefono[12];
}alumno;

float F1(FILE *);
void F2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void F3(FILE *, FILE *, FILE *, FILE *, FILE *);

int main(void)
{
  float pro;
  FILE *ap, *c1, *c2, *c3, *c4, *c5;
  ap = fopen("alu1.dat", "r");
  c1 = fopen("c1.dat", "w+");
  c2 = fopen( "c2.dat", "w+");
  c3 = fopen( "c3.dat", "w+");
  c4 = fopen( "c4.dat", "w+");
  c5 = fopen( "c5.dat", "w+");
  if ((ap!=NULL) && (c1!=NULL) && (c2!=NULL) && (c3!=NULL) && (c4!=NULL) && (c5!=NULL))
  {
    pro = F1(ap);
    printf("\nPromedio examen de admision: %.2f\n", pro);
    F2(ap, c1, c2, c3, c4, c5);
    F3(c1, c2, c3, c4, c5);
  }
  else 
    printf("\nEl o los archivos no se pudieron abrir");
  fclose(ap);
  fclose(c1);
  fclose(c2);
  fclose(c3);
  fclose(c4);
  fclose(c5);
}

float F1(FILE *ap)
{
  alumno alu;
  float sum = 0, pro;
  int i = 0;
  fread(&alu, sizeof(alumno), 1, ap);
  while (!feof(ap))
    {
      i++;
      sum += alu.examen;
      fread( &alu, sizeof(alumno), 1, ap);
    }
  pro = sum / i;
  return (pro);
}

void F2(FILE *ap, FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
  alumno alu;
  rewind(ap);
  fread(&alu, sizeof(alumno), 1, ap);
  while (!feof(ap))
    {
      if (((alu.examen >= 1300) && (alu.promedio >= 8)) || ((alu.examen >= 1400) && (alu.promedio >= 7)))
      {
        switch(alu.carrera)
          {
            case 1: fwrite(&alu, sizeof(alumno), 1, c1);
            break;
            case 2: fwrite(&alu, sizeof(alumno), 1, c2);
            break;
            case 3: fwrite(&alu, sizeof(alumno), 1, c3);
            break;
            case 4: fwrite(&alu, sizeof(alumno), 1, c4);
            break;
            case 5: fwrite(&alu, sizeof(alumno), 1, c5);
            break;
          }
      }
      fread(&alu, sizeof(alumno), 1, ap);
    }
}

void F3 (FILE *c1, FILE *c2, FILE *c3, FILE *c4, FILE *c5)
{
  alumno alu;
  float cal[5], sum;
  int i, j;
  i = 0;
  sum = 0;  
  rewind(c1);
  fread(&alu, sizeof(alumno), 1, c1);
  while (!feof(c1))
    {
      i++;
      sum += alu.clavel;
      fread(&alu, sizeof(alumno), 1, c1);
    }
  if (i)
    cal[0] = (sum / i);
  else
    cal[0] = 0;

  rewind(c2);
  sum = 0;
  i = 0;
  fread(&alu, sizeof(alumno), 1, c2);
  while (!feof(c2))
    {
      i++;
      sum += alu.examen;
      fread( &alu, sizeof(alumno), 1, c2);
    }
  if (i)
    cal[1] = (sum / i);
  else
    cal[1] = 0;

  rewind(c3);
  sum = 0;
  i = 0;
  fread(&alu, sizeof(alumno), 1, c3);
  while (!feof(c3))
    {
      i++;
      sum += alu.examen;
      fread(&alu, sizeof(alumno), 1, c3);
    }
  if (i)
    cal[2] = (sum / i);
  else
    cal[2] = 0;

  rewind(c4);
  sum = 0;
  i = 0;
  fread(&alu, sizeof(alumno), 1, c4);
  while (!feof(c4))
    {
      i++;
      sum += alu.examen;
      fread(&alu, sizeof(alumno), 1, c4);
    }
  if (i)
    cal[3] = (sum / i);
  else
    cal[3] = 0;

  rewind(c5);
  sum = 0;
  i = 0;
  fread(&alu, sizeof(alumno), 1, c5);
  while(!feof(c5))
    {
      i++;
      sum += alu.examen;
      fread(&alu, sizeof(alumno), 1, c5);
    }
  if (i)
    cal[4] = (sum / i);
  else
    cal[4] = 0;
  for (i = 0; i < 5; i++)
    printf("\nPromedio de la carrera %d: %.2f", i+1, cal[i]);
}
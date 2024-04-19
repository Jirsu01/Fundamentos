#include <stdio.h>

/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre y el promedio de un alumno de una universidad privada, determina si éste puede ser asistente de su carrera.
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */
int main(void) {
  int MAT, CAR, SEM;
  float PRO;
  printf( "Ingrese la matrícula del alumno: ");
  scanf( "%d", &MAT);
  printf( "Ingrese la carrera del alumno (1-Industrial, 2-Telemática, 3-Computación, 4-Mecanica) ");
  scanf( "%d", &CAR);
  printf("Ingrese semestre: ");
  scanf( "%d", &SEM); 
  printf("Ingrese promedio: ");
  scanf( "%f", &PRO);
  switch(CAR)
    {
      case 1: if (SEM>6 && PRO>=8.8)
        printf("\n%d %d %5.2f" , MAT, CAR, PRO);
      break;
      case 2: if (SEM>=5 && PRO>9.0)
        printf("\n%d %d %5.2f" , MAT, CAR, PRO);
      break;
      case 3: if (SEM>=6 && PRO>=8.8)
        printf("\n%d %d %5.2f" , MAT, CAR, PRO);
      break;
      case 4: if (SEM>=7 && PRO>=9.0)
        printf("\n%d %d %5.2f" , MAT, CAR, PRO);
      break;
      default: printf("\nError en la carrera");
      break;
    }
  return 0;
}
#include <stdio.h>
//nice
int main(void) 
{
  int i, j, n, mat;
  float cal;
  FILE *ar;
  printf("\nIngresa el numero de alumnos: ");
  scanf( "%d", &n);
  if((ar = fopen("arc8.txt", "w")) !=NULL)
  {
    fprintf(ar, "%d", n);
    for(i=0; i<n; i++)
      {
        printf("\nIngresa el numero de matricula %d: ", i+1);
        scanf("%d", &mat);
        fprintf(ar, "\n%d", mat);
        for (j=0; j<5; j++)
          {
            printf("\nCalificacion %d: ", j+1);
            scanf("%f", &cal);
            fprintf(ar,"%.2f", cal);
          }
      }
    fclose(ar);
  }
  else
    printf("No se puede abrir el archivo");
}
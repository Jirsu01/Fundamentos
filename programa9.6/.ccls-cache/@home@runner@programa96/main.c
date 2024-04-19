#include <stdio.h>

int main(void)
{
  int i, j, n, mat;
  float cal, pro;
  FILE *ar;
  if ((ar = fopen("arc9.txt", "r")) != NULL)
  {
    fscanf(ar, "%d", &n);
    for (i = 0; i < n; i++)
      {
        fscanf(ar, "%d", &mat);
        printf("%d\t", mat);
        pro = 0;
        for (j = 0; j < 3; j++)
          {
            fscanf(ar, "%f", &cal);
            pro += cal;
          }
        printf("\t %");
      }
  }
}
#include <stdio.h>

/* Elección.
El programa obtiene el total de votos de cada candidato y el porcentaje correspondiente. También considera votos nulos.
VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real.*/

int main(void) {
  int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
  float P01, P02, P03, P04, P05, PON;
  printf("Ingrese el primer voto:");
  scanf("%d", &VOT);
  while (VOT)
    {
      switch (VOT)
        {
          case 1: C1++; break;
          case 2: C2++; break;
          case 3: C3++; break;
          case 4: C4++; break;
          case 5: C5++; break;
          default: NU++; break;
        }
      printf("Ingrese el siguiente voto -0 para terminar-:");
      scanf("%d", &VOT);
    }
  SVO = C1 + C2 + C3 + C4 + C5 + NU;
  P01 = ((float) C1 / SVO) * 100;
  P02 = ((float) C2 / SVO) * 100;
  P03 = ((float) C3 / SVO) * 100;
  P04 = ((float) C4 / SVO) * 100;
  P05 = ((float) C5 / SVO) * 100;
  PON = ((float) NU / SVO) * 100;
  printf("El total de votos es: %d\n", SVO);
  printf("\nCandidato 1: %d votos - %5.2f %%\n", C1, P01);
  printf("Candidato 2: %d votos - %5.2f %%\n", C2, P02);
  printf("Candidato 3: %d votos - %5.2f %%\n", C3, P03);
  printf("Candidato 4: %d votos - %5.2f %%\n", C4, P04);
  printf("Candidato 5: %d votos - %5.2f %%\n", C5, P05);
  printf("Nulos: %d votos - %5.2f %%\n", NU, PON);
  return 0;
}
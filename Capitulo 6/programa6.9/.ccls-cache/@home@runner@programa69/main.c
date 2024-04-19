#include <stdio.h>

//Asigna
//El programa, al recibir un arreglo bidimensional cuadrado, asigna elementos en funcion del modulo.
//(residuo) a un arreglo unidimensional.

void Lectura(int [][10], int);
void Calcula(int [][10], float [], int);
float Mod0(int [][10], int, int);
float Mod1(int [][10], int);
float Mod2(int [][10], int, int);
void Imprime(float [10], int);

int main(void) {
  int MAT[10][10], TAM;
  float VEC[10];
  do
    {
      printf("Ingrese el tamaño de la matriz: ");
      scanf( "%d", &TAM);
    }
    while (TAM >10 || TAM <1);
  Lectura(MAT, TAM);
  Calcula(MAT, VEC, TAM);
  Imprime(VEC, TAM);
}

void Lectura(int A[][10], int N)
//La funcion Lectura se utiliza para leer un arreglo bidiemensional cuadrado de tipo entero.
{
  int I, J;
  for (I=0; I<N; I++)
    for (J=0; J<N; J++)
      
}
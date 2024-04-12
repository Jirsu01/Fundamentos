#include <stdio.h>
 //Crea un programa que lea la letra y convierta a mayuscula o minuscula
int main(void) {
  char letra;
  printf("Introduce una letra: ");
  scanf("%c", &letra);
  if(letra >= 'A' && letra <= 'Z'){
    printf("La letra es mayuscula:");
    letra = letra + 32;
   printf("%c" , letra);}
  else {
  printf("La letra es minuscula:");
  letra = letra - 32;
 printf("%c" , letra);
  }
  return 0;
}
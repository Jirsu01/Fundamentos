#include <stdio.h>

void calcularPrestamo(float cantidad, float interes, int meses);

int main() {
    float interes, cantidadPrestamo = 1000;
    int meses, opcion;
  
    do {
        printf("\nOpciones:\n");
        printf("0 - Salir\n");
        printf("1 - Cambiar cantidad del prestamo\n");
        printf("2 - Calcular prestamo\n");
        printf("3 - Grabar en archivo\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Saliendo del programa...\n");
                break;
            case 1:
                printf("Ingrese la nueva cantidad del prestamo: ");
                scanf("%f", &cantidadPrestamo);
                break;
            case 2:
                printf("Ingrese el interes (porcentaje): ");
                scanf("%f", &interes);
                printf("Ingrese la cantidad de meses a pagar: ");
                scanf("%d", &meses);
                calcularPrestamo(cantidadPrestamo, interes / 100, meses);
                break;
            case 3:
                {
                   FILE *archivo;
                    archivo = fopen("prestamo.txt", "a");
                      if (archivo != NULL) {
                        fprintf(archivo, "\nDetalles del prestamo:\n");
                        fprintf(archivo, "Cantidad del prestamo: $%.2f\n", cantidadPrestamo);
                        fprintf(archivo, "Interes: %.2f%%\n", interes);
                        fprintf(archivo, "Plazo en meses: %d\n", meses);
                        calcularPrestamo(cantidadPrestamo, interes, meses);
                        fclose(archivo);
                        printf("Datos del prestamo grabados en prestamo.txt\n");
                    } else {
                        printf("Error al abrir el archivo para escribir.\n");
                    }
                }
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese una opcion valida.\n");
        }
    }
      while (opcion != 0);

    return 0;
}

void calcularPrestamo(float cantidad, float interes, int meses) {
    float interesTotal = cantidad * interes;
    float cantidadTotal = cantidad + interesTotal;
    float pagoMensual = cantidadTotal / meses;

    printf("\nDetalles del prestamo:\n");
    printf("Cantidad del prestamo: $%.2f\n", cantidad);
    printf("Interes: %.2f%%\n", interes * 100);
    printf("Total a pagar: $%.2f\n", cantidadTotal);
    printf("Pago mensual durante %d meses: $%.2f\n", meses, pagoMensual);
}
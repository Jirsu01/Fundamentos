#include <stdio.h>
#include <math.h>
//Llevo la noche entera haciendo esto pero pude terminarlo al final, codigo hecho con mucho amor por mi.

int main() {
    FILE *archivo;
    float tasaInteres, saldo, pago_interes, pagoMensual, amortizacion, saldoFinal, sumaInteres, costeTotal;
    int cuotas, i, opcion;
    float monto = 10000;

    do {
        printf("\n-----Menu-----\n");
        printf("0 - Salir del programa\n");
        printf("1 - Ingresar la nueva cantidad de un prestamo\n");
        printf("2 - Calcular (aqui te pedira ingresar el interes y el numero de cuotas)\n");
        printf("3 - Calcular y guardar los calculos en un archivo .txt\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Saliendo del programa...\n");
                break;
            case 1:
                printf("Ingrese la nueva cantidad del prestamo: ");
                scanf("%f", &monto);
                break;
            case 2:
               printf("Ingrese el interes (en porcentaje): ");
               scanf("%f", &tasaInteres);
               printf("Ingrese el numero de cuotas: ");
               scanf("%d", &cuotas);
               tasaInteres = (tasaInteres / 100.0) / cuotas;
               saldo = monto;
               printf("\n%-10s%-15s%-15s%-15s%-15s%-15s\n", "Cuota", "Saldo Inicial", "Pago Cuota", "Amortizacion", "Interes", "Saldo Final");
               pagoMensual = 0;
               pago_interes = 0;
               sumaInteres = 0;
               for (i = 1; i <= cuotas; i++) {

                   saldo = saldo - amortizacion;
                   pagoMensual = (monto * tasaInteres) / (1 - pow(1 + tasaInteres, -cuotas));
                   pago_interes = saldo * tasaInteres;
                   sumaInteres = pago_interes + sumaInteres;
                   amortizacion = pagoMensual - pago_interes;
                   saldoFinal = saldo - amortizacion;
                   printf("%-10d%-15.2f%-15.2f%-15.2f%-15.2f%-15.2f\n", i, saldo, pagoMensual, amortizacion, pago_interes, saldoFinal);
               }
              costeTotal = sumaInteres + monto;
               printf("-----RESUMEN DEL PRESTAMO-----\n");
               printf("El pago mensual es: %.2f\n", pagoMensual);    
               printf("El numero de cuotas es: %d\n", cuotas);
               printf("Importe total de los intereses: %.2f\n", sumaInteres);
               printf("Coste total del prestamo: %.2f\n", costeTotal);
               printf("\nDesea volver al menu principal (1) o salir del programa (0): ");
               scanf("%d", &opcion);
               break;
            case 3:
              printf("Ingrese el interes (en porcentaje): ");
               scanf("%f", &tasaInteres);
               printf("Ingrese el numero de cuotas: ");
               scanf("%d", &cuotas);
               tasaInteres = (tasaInteres / 100.0) / cuotas;
               saldo = monto;
               archivo = fopen("prestamo.txt", "w");
               if (archivo == NULL) {
                   printf("Error al abrir el archivo.\n");
                   return 1;
               }
               fprintf(archivo, "\n%-10s%-15s%-15s%-15s%-15s%-15s\n", "Cuota", "Saldo Inicial", "Pago Cuota", "Amortizacion", "Interes", "Saldo Final");
               sumaInteres = 0;
               for (i = 1; i <= cuotas; i++) {
                   saldo = saldo - amortizacion;
                   pagoMensual = (monto * tasaInteres) / (1 - pow(1 + tasaInteres, -cuotas));
                   pago_interes = saldo * tasaInteres;
                   sumaInteres += pago_interes;
                   amortizacion = pagoMensual - pago_interes;
                   saldoFinal = saldo - amortizacion;
                   printf("%-10d%-15.2f%-15.2f%-15.2f%-15.2f%-15.2f\n", i, saldo, pagoMensual, amortizacion, pago_interes, saldoFinal);
                   fprintf(archivo, "%-10d%-15.2f%-15.2f%-15.2f%-15.2f%-15.2f\n", i, saldo, pagoMensual, amortizacion, pago_interes, saldoFinal);
               }
               costeTotal = sumaInteres + monto;
               printf("-----RESUMEN DEL PRÉSTAMO-----\n");
               printf("El pago mensual es: %.2f\n", pagoMensual);    
               printf("El numero de cuotas es: %d\n", cuotas);
               printf("Importe total de los intereses: %.2f\n", sumaInteres);
               printf("Coste total del prestamo: %.2f\n", costeTotal);

               fprintf(archivo, "-----RESUMEN DEL PRÉSTAMO-----\n");
               fprintf(archivo, "El pago mensual es: %.2f\n", pagoMensual);    
               fprintf(archivo, "El numero de cuotas es: %d\n", cuotas);
               fprintf(archivo, "Importe total de los intereses: %.2f\n", sumaInteres);
               fprintf(archivo, "Coste total del prestamo: %.2f\n", costeTotal);
               fclose(archivo);

               printf("Los cálculos han sido guardados en 'calculadora_prestamo.txt'.\n");
               break;
            default:
                printf("Opcion no valida. Por favor, ingrese una opcion valida.\n");
        }
    } 
      while (opcion != 0);
    return 0;
}

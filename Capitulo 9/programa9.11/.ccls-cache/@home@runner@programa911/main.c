#include <stdio.h>

typedef struct {
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);

int main(void) {
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL) {
        incrementa(ar);
        fclose(ar);
        printf("El archivo se ha actualizado correctamente.\n");
    } else {
        printf("El archivo no se puede abrir.\n");
    }
    return 0;
}

void incrementa(FILE *ap) {
    empleado emple;
    size_t empleado_size = sizeof(empleado);

    while (fread(&emple, empleado_size, 1, ap) == 1) {
        float sum = 0;
        for (int j = 0; j < 12; j++) {
            sum += emple.ventas[j];
        }
        if (sum > 1000000) {
            emple.salario *= 1.10;
            fseek(ap, -empleado_size, SEEK_CUR);
            fwrite(&emple, empleado_size, 1, ap);
        }
    }
}
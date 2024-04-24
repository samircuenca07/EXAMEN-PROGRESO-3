//Escribe un programa que se utilice para calcular el precio final de venta de autos desegunda mano en un concesionario. Para ello, el programa debe pedir al usuarioque introduzca el precio base del vehículo, el número de kilómetros y su consumo.
//Si los kilómetros son inferiores a 20000 y su consumo inferior a 5, incrementar elprecio base un 20%
//Si los kilómetros son superiores a 20000 y su consumo inferior o igual a 5,incrementar el precio base un 10%
//Si el consumo es superior a 5, incrementar el precio base un 5%


#include <stdio.h>

int main() {
    double precioBase, consumo;
    int kilometros;

    printf("Introduce el precio base del vehículo (valor positivo): ");
    scanf("%lf", &precioBase);
    if (precioBase < 0) {
        printf("Error: El precio base no puede ser negativo.\n");
        return 1;
    }

    printf("Introduce el número de kilómetros (valor positivo): ");
    scanf("%d", &kilometros);
    if (kilometros < 0) {
        printf("Error: Los kilómetros no pueden ser negativos.\n");
        return 1;
    }

    printf("Introduce el consumo del vehículo (valor positivo): ");
    scanf("%lf", &consumo);
    if (consumo < 0) {
        printf("Error: El consumo no puede ser negativo.\n");
        return 1;
    }

    if (kilometros < 20000 && consumo < 5) {
        precioBase *= 1.20;
    } else if (kilometros > 20000 && consumo <= 5) {
        precioBase *= 1.10;
    } else if (consumo > 5) {
        precioBase *= 1.05;
    }

    printf("El precio final del vehículo es: %.2lf\n", precioBase);

    return 0;
}

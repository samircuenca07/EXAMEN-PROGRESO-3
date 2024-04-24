Realice un programa que realice la conversión de divisas de dólares a euros, libras
esterlinas o reales. Pida la cantidad de dólares que va a cambiar, seleccione a que
moneda desea cambiar e indique el valor a entrega

#include <stdio.h>

int main() {
    float cantidad, euros = 0.88, libras = 0.76, reales = 5.26, conversion;
    int opcionMonedaOrigen, opcionMonedaDestino;

    printf("Selecciona la moneda que tienes:\n");
    printf("1. Dólares\n");
    printf("2. Euros\n");
    printf("3. Libras esterlinas\n");
    printf("4. Reales\n");
    scanf("%d", &opcionMonedaOrigen);

    printf("Introduce la cantidad que deseas cambiar (valor positivo con decimales): ");
    scanf("%f", &cantidad);
    if (cantidad <= 0) {
        printf("Error: La cantidad debe ser un valor positivo.\n");
        return 1;
    }

    printf("Selecciona a qué moneda deseas cambiar:\n");
    printf("1. Dólares\n");
    printf("2. Euros\n");
    printf("3. Libras esterlinas\n");
    printf("4. Reales\n");
    scanf("%d", &opcionMonedaDestino);

    if (opcionMonedaOrigen == 1) { // Dólares
        switch (opcionMonedaDestino) {
            case 2:
                conversion = cantidad * euros;
                break;
            case 3:
                conversion = cantidad * libras;
                break;
            case 4:
                conversion = cantidad * reales;
                break;
            default:
                printf("Opción no válida.\n");
                return 1;
        }
    } else {
        printf("Lo siento, actualmente solo se admite la conversión desde dólares.\n");
        return 1;
    }

    printf("Tus %.2f dólares se convirtieron a %.2f de la nueva moneda.\n", cantidad, conversion);

    return 0;
}

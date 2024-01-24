//SOLUCION 1

#include <stdio.h>

int main() {
    int cantidadNumeros, indice, divisor, esPrimo1, esPrimo2, numeroActual;
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &cantidadNumeros);
    for (indice = 0; indice < cantidadNumeros; indice++) {
        printf("Ingrese el número %d: ", indice + 1);
        scanf("%d", &numeroActual);
        esPrimo1 = 1;
        esPrimo2 = 1;
        divisor = 2;
        while (divisor * divisor <= numeroActual) {
            if (numeroActual % divisor == 0) {
                esPrimo1 = 0;
                break;
            }
            divisor++;
        }
        divisor = 2;
        while (divisor * divisor <= numeroActual + 2) {
            if ((numeroActual + 2) % divisor == 0) {
                esPrimo2 = 0;
                break;
            }
            divisor++;
        }
        if (esPrimo1 && esPrimo2) {
            printf("El primo gemelo de %d es %d\n", numeroActual, numeroActual + 2);
        } else {
            printf("%d no tiene un primo gemelo\n", numeroActual);
        }
    }
    return 0;
}

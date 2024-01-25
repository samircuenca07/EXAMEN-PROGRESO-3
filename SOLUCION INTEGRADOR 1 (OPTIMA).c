//SOLUCION 1 OPTIMA

#include <stdio.h>

int esPrimo(int numero) {
    int divisor;
    if (numero < 2) {
        return 0;
    }
    for (divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int rangoNumero1, rangoNumero2, numeroActual;
    printf("Ingrese el rango de número 1: ");
    scanf("%d", &rangoNumero1);
    printf("Ingrese el rango de número 2: ");
    scanf("%d", &rangoNumero2);
    for (numeroActual = rangoNumero1; numeroActual <= rangoNumero2; numeroActual++) {
        if (esPrimo(numeroActual) && esPrimo(numeroActual + 2)) {
            printf("El primo gemelo de %d es %d\n", numeroActual, numeroActual + 2);
        }
    }
    return 0;
}

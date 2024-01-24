//SOLUCION 2

#include <stdio.h>

int main() {
    int numero, divisor, esPrimo, esPrimoGemelo;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    esPrimo = 1; // Suponemos que el número es primo
    esPrimoGemelo = 1; // Suponemos que el gemelo es primo
    divisor = 2;
    // Verificamos si el número es primo
    while (divisor * divisor <= numero) {
        if (numero % divisor == 0) {
            esPrimo = 0; // Si el número tiene un divisor, no es primo
        }
        divisor++;
    }
    divisor = 2;
    // Verificamos si el número gemelo es primo
    while (divisor * divisor <= numero + 2) {
        if ((numero + 2) % divisor == 0) {
            esPrimoGemelo = 0; // Si el número gemelo tiene un divisor, no es primo
        }
        divisor++;
    }
    // Si el número y su gemelo son primos, los imprimimos
    if (esPrimo && esPrimoGemelo) {
        printf("El primo gemelo de %d es %d\n", numero, numero + 2);
    } else {
        printf("%d no tiene un primo gemelo\n", numero);
    }
    return 0;
}

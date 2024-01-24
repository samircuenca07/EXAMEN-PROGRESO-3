//SOLUCION 3

#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i * i <= num; i += 2) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

// Función para encontrar el primo gemelo de un número
int primoGemelo(int numero) {
    if (esPrimo(numero) && esPrimo(numero + 2)) {
        printf("El primo gemelo de %d es %d\n", numero, numero + 2);
        return 1;
    } else {
        printf("%d no tiene un primo gemelo\n", numero);
        return 0;
    }
}

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    primoGemelo(numero);
    return 0;
}

Diseñe un programa para determinar si un número N es primo. (Un
número primo solo puede ser divisible para él mismo y por la
unidad)

#include <stdio.h>

int main() {
    int N, i;
    int esPrimo = 1;

    printf("Introduce un número entero positivo mayor que 1: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("Error: El número debe ser mayor que 1.\n");
        return 1;
    }

    for (i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            esPrimo = 0;
            break;
        }
    }

    if (esPrimo) {
        printf("\nEl número **%d** es primo.\n", N);
    } else {
        printf("\nEl número **%d** no es primo.\n", N);
    }

    return 0;
}


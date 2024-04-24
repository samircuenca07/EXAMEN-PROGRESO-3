

#include <stdio.h>

int main() {
    int numero, original, reverso = 0, resto;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Error: El número debe ser positivo.\n");
        return 1;
    }

    original = numero;

    while (numero != 0) {
        resto = numero % 10;
        reverso = reverso * 10 + resto;
        numero /= 10;
    }

    if (original == reverso) {
        printf("\nEl número **%d** es un palíndromo.\n", original);
    } else {
        printf("\nEl número **%d** no es un palíndromo.\n", original);
    }

    return 0;
}

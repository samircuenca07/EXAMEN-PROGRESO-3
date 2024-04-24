Realice un programa en C que, al recibir como dato un entero
positivo, obtenga e imprima la sucesión de ULAM, la cual se llama
así en honor del matemático S. Ulam.
Sucesión de ULAM
Inicia con cualquier entero positivo.
Si el número es par, divídelo entre 2. Si es impar, multiplícalo por 3
y agrégale1. Obtén sucesivamente números enteros repitiendo el
proceso.
Al final obtendrás el número 1. Por ejemplo, si el entero inicial es
45, la secuencia es la siguiente: 45, 136, 68, 34, 17, 52, 26, 13,
40, 20, 10, 5, 16, 8, 4, 2, 1.

#include <stdio.h>

int main() {
    int numero;

    printf("Introduce un número entero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Error: El número debe ser positivo.\n");
        return 1;
    }

    printf("\nSucesión de Ulam para **%d**: ", numero);

    while (numero != 1) {
        printf("%d, ", numero);
        if (numero % 2 == 0) {
            numero /= 2;
        } else {
            numero = numero * 3 + 1;
        }
    }

    printf("1\n");

    return 0;
}

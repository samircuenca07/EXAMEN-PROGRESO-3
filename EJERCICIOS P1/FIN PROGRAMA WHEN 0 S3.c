Desarrollo un programa que solicite constantemente un número al
usuario. El programa finalizará cuando el usuario introduzca un 0,
momento en el que se debe visualizar la suma y el promedio de
todos los número introducidos.

#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int contador = 0;
    float promedio;

    printf("Por favor, introduce un número (0 para terminar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        suma += numero;
        contador++;
        printf("Por favor, introduce otro número (0 para terminar): ");
        scanf("%d", &numero);
    }

    if (contador != 0) {
        promedio = (float)suma / contador;
        printf("\nLa suma de los números introducidos es: **%d**\n", suma);
        printf("El promedio de los números introducidos es: **%.2f**\n", promedio);
    } else {
        printf("\nNo se introdujo ningún número.\n");
    }

    return 0;
}

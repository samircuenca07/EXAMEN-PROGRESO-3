Realizar un menú para cada uno de los siguientes enunciados:
a) calcular e imprimir la suma de una secuencia de enteros,
suponiendo que el primer entero leído con scanf() especifica el
número de valores a introducir. Por ejemplo, una secuencia de
entrada típica pudiera ser
5 100 200 300 400 500
Donde 5 indica que los 5 valores siguientes deberán ser sumados.
b) calcular e imprimir la suma de los enteros pares del 2 al valor n
ingresado desde teclado
c) calcular e imprimir el producto de los enteros impares del 1 a m
ingresados desde teclado

#include <stdio.h>

int main() {
    int opcion, i, n, m;
    int suma = 0;
    int producto = 1;
    int valor;

    printf("Selecciona una opción:\n");
    printf("1. Calcular e imprimir la suma de una secuencia de enteros\n");
    printf("2. Calcular e imprimir la suma de los enteros pares del 2 al valor n\n");
    printf("3. Calcular e imprimir el producto de los enteros impares del 1 a m\n");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 3) {
        printf("Error: Opción no válida. Debe ser 1, 2 o 3.\n");
        return 1;
    }

    switch (opcion) {
        case 1:
            printf("Introduce el número de valores a sumar: ");
            scanf("%d", &n);
            if (n <= 0) {
                printf("Error: El número de valores debe ser mayor que 0.\n");
                return 1;
            }
            for (i = 0; i < n; i++) {
                printf("Introduce el valor %d: ", i + 1);
                scanf("%d", &valor);
                suma += valor;
            }
            printf("\nLa suma de los valores introducidos es: **%d**\n", suma);
            break;
        case 2:
            printf("Introduce el valor n: ");
            scanf("%d", &n);
            if (n < 2) {
                printf("Error: El valor n debe ser mayor o igual a 2.\n");
                return 1;
            }
            for (i = 2; i <= n; i += 2) {
                suma += i;
            }
            printf("\nLa suma de los enteros pares del 2 al **%d** es: **%d**\n", n, suma);
            break;
        case 3:
            printf("Introduce el valor m: ");
            scanf("%d", &m);
            if (m < 1) {
                printf("Error: El valor m debe ser mayor o igual a 1.\n");
                return 1;
            }
            for (i = 1; i <= m; i += 2) {
                producto *= i;
            }
            printf("\nEl producto de los enteros impares del 1 al **%d** es: **%d**\n", m, producto);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}

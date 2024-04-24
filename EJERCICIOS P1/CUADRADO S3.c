Escriba un programa que lea el lado de un cuadrado y a
continuación lo imprima en forma de un cuadrado hueco de
asteriscos. El programa debe funcionar para cuadrados de todos
los tamaños entre 1 y 20. Por ejemplo si se lee un tamaño de 5,
debería imprimir
*****
*   *
*   *
*   *
*****

#include <stdio.h>

int main() {
    int lado, i, j;

    printf("Introduce el lado del cuadrado (entre 1 y 20): ");
    scanf("%d", &lado);

    if (lado < 1 || lado > 20) {
        printf("Error: El lado del cuadrado debe estar entre 1 y 20.\n");
        return 1;
    }

    printf("\n");
    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

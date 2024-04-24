Escribe un programa que pida un número al usuario y muestre el día de la semana
al que equivale. Si se introduce un número fuera del rango válido (1-7), se debe
mostrar un mensaje de error

#include <stdio.h>

int main() {
    int numero;

    printf("Introduce un número (1-7): ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("El día de la semana es Lunes.\n");
            break;
        case 2:
            printf("El día de la semana es Martes.\n");
            break;
        case 3:
            printf("El día de la semana es Miércoles.\n");
            break;
        case 4:
            printf("El día de la semana es Jueves.\n");
            break;
        case 5:
            printf("El día de la semana es Viernes.\n");
            break;
        case 6:
            printf("El día de la semana es Sábado.\n");
            break;
        case 7:
            printf("El día de la semana es Domingo.\n");
            break;
        default:
            printf("Error: Número fuera del rango válido (1-7).\n");
    }

    return 0;
}

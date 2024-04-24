//Escribe un programa que pida al usuario su nota y compruebe si ha suspendido(<6), si ha sacado bueno (6), muy bueno (7-8) o un sobresaliente (9-10)


#include <stdio.h>

int main() {
    int nota;
    char opcion;

    do {
        printf("Introduce tu nota (0-10): ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota no válida. Introduce un número entre 0 y 10.\n");
        } else if (nota < 6) {
            printf("Has suspendido.\n");
        } else if (nota == 6) {
            printf("Has sacado bueno.\n");
        } else if (nota >= 7 && nota <= 8) {
            printf("Has sacado muy bueno.\n");
        } else {
            printf("Has sacado sobresaliente.\n");
        }

        printf("¿Deseas calcular otra nota? (S/N): ");
        scanf(" %c", &opcion);
    } while (opcion == 'S' || opcion == 's');

    return 0;
}

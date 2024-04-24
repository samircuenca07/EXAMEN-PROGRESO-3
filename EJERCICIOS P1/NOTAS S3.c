#include <stdio.h>

int main() {
    int numNotas, nota, aprobados = 0, reprobados = 0;
    char opcion;

    do {
        printf("Introduce el número de notas a ingresar: ");
        scanf("%d", &numNotas);

        for (int i = 0; i < numNotas; i++) {
            printf("Introduce la nota del estudiante %d: ", i + 1);
            scanf("%d", &nota);

            if (nota >= 6) {
                aprobados++;
            } else {
                reprobados++;
            }
        }

        printf("Número de estudiantes que aprobaron: %d\n", aprobados);
        printf("Número de estudiantes que reprobaron: %d\n", reprobados);

        printf("¿Deseas calcular las notas de otro grupo de estudiantes? (S/N): ");
        scanf(" %c", &opcion);

        aprobados = 0;
        reprobados = 0;
    } while (opcion == 'S' || opcion == 's');

    return 0;
}

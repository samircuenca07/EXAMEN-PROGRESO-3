Diseñar un programa para calcular la velocidad en (m/s) de los
corredores de la carrera de 1.500 metros. La entrada consistirá en
parejas de números (minutos, segundos) que dan el tiempo del
corredor; por cada corredor, el algoritmo debe imprimir el tiempo
en minutos y segundos así como la velocidad media. Ejemplo de
entrada de datos: (3,53) (3,40) (3,46) (3,52) (4,0) (0,0); el último
par de datos se utilizará como fin de entrada de datos.


#include <stdio.h>

int main() {
    int minutos, segundos;
    float tiempoEnSegundos, velocidad;

    printf("Introduce el tiempo del corredor (minutos, segundos) (0,0 para terminar): ");
    scanf("%d,%d", &minutos, &segundos);

    while (minutos != 0 || segundos != 0) {
        if (minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
            printf("Error: Los minutos y los segundos deben estar entre 0 y 59.\n");
            return 1;
        }

        tiempoEnSegundos = minutos * 60 + segundos;
        velocidad = 1500 / tiempoEnSegundos;

        printf("\nTiempo: **%d minutos y %d segundos**\n", minutos, segundos);
        printf("Velocidad media: **%.2f m/s**\n", velocidad);

        printf("\nIntroduce el tiempo del siguiente corredor (minutos, segundos) (0,0 para terminar): ");
        scanf("%d,%d", &minutos, &segundos);
    }

    return 0;
}

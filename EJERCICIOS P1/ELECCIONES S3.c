Los organizadores de un acto electoral solicitaron realizar un
programa para manejar el conteo de votos. En la elección hay
cinco candidatos, los cuales se representan con los valores
comprendidos entre 1 y 5.
El programa debe obtener el número de votos de cada candidato y
el porcentaje que obtuvo respecto al total de los votantes.
Se ingresa los votos de manera desordenada, el final de ingreso
de los votos se representa por un cero. (Use la sentencia Do
while)
Ejemplo
INGRESO DE VOTOS: 2 5 5 4 3 5 1 2 4 3 1 2 4 5 0
2 votos el candidato1 porcentaje 14,3%
3 votos el candidato2 porcentaje 21,4%
2 votos el candidato3 porcentaje 14,3%
3 votos el candidato4 porcentaje 21,4%
4 votos el candidato5 porcentaje 28,6%


#include <stdio.h>

int main() {
    int votos[6] = {0}, voto, totalVotos = 0;
    float porcentaje;

    printf("Introduce los votos (0 para terminar): ");

    do {
        scanf("%d", &voto);
        if (voto >= 1 && voto <= 5) {
            votos[voto]++;
            totalVotos++;
        } else if (voto != 0) {
            printf("Error: Voto no válido. Debe ser un número entre 1 y 5.\n");
        }
    } while (voto != 0);

    printf("\nResultados de la votación:\n");
    for (int i = 1; i <= 5; i++) {
        porcentaje = (float)votos[i] / totalVotos * 100;
        printf("Candidato %d: **%d votos**, porcentaje del total: **%.1f%%**\n", i, votos[i], porcentaje);
    }

    return 0;
}

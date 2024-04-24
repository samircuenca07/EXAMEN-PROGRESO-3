//Muchos bancos y cajas de ahorro calculan los intereses de las cantidadesdepositadas por los clientes diariamente en base a las siguientes premisas.
//Un capital de 1.000, con una tasa de interés del 6%, renta un interés en undía de 0,06 multiplicado por 1.000 y dividido por 365. Esta operaciónproducirá 0,16 de interés y el capital acumulado será 1.000,16. El interéspara el segundo día se calculará multiplicando 0,06 por 1.000 y dividiendoel resultado por 365. Diseñar un programa que reciba tres entradas: elcapital a depositar, la tasa de interés y la duración del depósito en semanas,y calcule el capital total acumulado al final del período de tiempo especificado.

#include <stdio.h>
#include <math.h>

// Función para solicitar una entrada de tipo double con validación
double solicitarEntrada(char* mensaje, double min, double max) {
    double entrada;
    do {
        printf("%s", mensaje);
        scanf("%lf", &entrada);
        if(entrada < min || entrada > max) {
            printf("Entrada inválida. Inténtalo de nuevo.\n");
        }
    } while(entrada < min || entrada > max);
    return entrada;
}

int main() {
    double capital, tasa_interes, duracion_semanas, capital_acumulado;
    int dias;
    char opcion;

    do {
        capital = solicitarEntrada("Introduce el capital a depositar: ", 0.01, 1e9);
        tasa_interes = solicitarEntrada("Introduce la tasa de interés (por ejemplo, para 6%% introduce 0.06): ", 0.01, 1);
        duracion_semanas = solicitarEntrada("Introduce la duración del depósito en semanas: ", 0.01, 5200);

        dias = duracion_semanas * 7;


        capital_acumulado = capital * pow(1 + tasa_interes / 365, dias);

        printf("El capital total acumulado al final del período es: %.2f\n", capital_acumulado);

        printf("¿Deseas calcular el capital acumulado para otro depósito? (S/N): ");
        scanf(" %c", &opcion);
    } while(opcion == 'S' || opcion == 's');

    return 0;
}

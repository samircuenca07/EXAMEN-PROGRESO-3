La función calculo_carga() determina la cuenta de cada cliente en un estacionamiento público, con
una base de 2 dólares de estacionamiento mínimo por las primeras tres horas. El estacionamiento
tiene 50 centavos adicionales por cada hora o fracción. La cuenta máxima para cualquier período de
24 horas es de 10 dólares. Suponer que no existe ningún vehículo que se quede más de 24 horas a la
vez.
Escribir un programa que calcule e imprima las cuentas por estacionamiento de cada cliente que ayer
estacionario sus automóviles en este garage, para lo cual se deberá introducir las horas de
estacionamiento para cada uno de los clientes. El programa deberá imprimir los resultados en un
formato tabular nítido, y deberá calcular e imprimir el total de los ingresos del día de ayer. Por
ejemplo, la salida deberá aparecer en el formato siguiente

#include <stdio.h>

// Función para calcular la carga
double calculo_carga(double horas) {
    double carga = 2.0;
    if (horas > 3) {
        carga += ((int)horas - 2) * 0.5;
        if (horas - (int)horas > 0) {
            carga += 0.5;
        }
    }
    if (carga > 10) {
        carga = 10.0;
    }
    return carga;
}

int main() {
    double horas, totalHoras = 0, totalCarga = 0;
    int carro = 1;
    char respuesta;

    printf("Carro\tHoras\tCarga\n");

    do {
        printf("Ingrese las horas de estacionamiento para el carro %d: ", carro);
        scanf("%lf", &horas);
        double carga = calculo_carga(horas);
        printf("%d\t%.1f\t%.2f\n", carro, horas, carga);
        totalHoras += horas;
        totalCarga += carga;
        carro++;
        printf("¿Llegó otro auto? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    printf("TOTAL\t%.1f\t%.2f\n", totalHoras, totalCarga);

    return 0;
}

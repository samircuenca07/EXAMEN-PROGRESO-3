Crear una aplicación que permita pagar a los empleados de una farmacéutica, para
ello se necesita registrar los siguientes datos de los empleados: total de horas
trabajadas, valor por hora, monto de ventas. La aplicación debe permitir conocer el
salario bruto, el valor por bonificaciones y el salario a ser recibido. El salario bruto
será calcula considerando lo siguiente: se pagarán las primeras 40 horas al valor de
hora trabajada, si excede hasta 10 horas se pagará por cada hora extra el 10%
adicional del valor de hora, si excede entre 11 y 15 horas se pagará el 15%
adicional del valor por hora y si excede de las 16 horas se pagará el 20% adicional
por cada hora trabajada. Se pagarán bonificaciones considerando el monto de
ventas que se ha alcanzado el empleado de la siguiente manera: por montos hasta
800 dólares se pagará un 2% de las ventas, mayores a 800 hasta 1500 el 4%,
mayores de 1500 hasta 3000 el 6% y mayores de 3000 el 8%. El cálculo del valor a
pagar será el salario bruto – 9.45% del aporte individual al IESS más las
bonificaciones.
Se desconoce el número de empleados que tiene la empresa.
La ejecución el programa podría verse similar a la siguiente:
Empleado 1:
Ingrese las horas trabajas: 40
Ingrese el valor por hora: 7,5
Ingrese valor de ventas: 985
Salario: $311.05
Empleado 2:
Ingrese las horas trabajas: 50
Ingrese el valor por hora: 8.4
Ingrese valor de ventas: 0
Salario: $387.91
Empleado 3:
Ingrese las horas trabajas: 45
Ingrese el valor por hora: 5.6
Ingrese valor de ventas: 0
Salario: $230.72
Valor total de la nómina: $929,68

#include <stdio.h>

int main() {
    int numEmpleados, horasTrabajadas;
    float valorPorHora, montoVentas, salarioBruto, bonificaciones, salarioFinal, totalNomina = 0;

    printf("Ingrese el número de empleados (valor positivo): ");
    scanf("%d", &numEmpleados);
    if (numEmpleados <= 0) {
        printf("Error: El número de empleados debe ser un valor positivo.\n");
        return 1;
    }

    for (int i = 1; i <= numEmpleados; i++) {
        printf("\nEmpleado %d:\n", i);

        printf("Ingrese las horas trabajadas (valor entre 0 y 168): ");
        scanf("%d", &horasTrabajadas);
        if (horasTrabajadas < 0 || horasTrabajadas > 168) {
            printf("Error: Las horas trabajadas deben estar entre 0 y 168.\n");
            return 1;
        }

        printf("Ingrese el valor por hora (valor positivo): ");
        scanf("%f", &valorPorHora);
        if (valorPorHora <= 0) {
            printf("Error: El valor por hora debe ser un valor positivo.\n");
            return 1;
        }

        printf("Ingrese el valor de ventas (valor positivo): ");
        scanf("%f", &montoVentas);
        if (montoVentas < 0) {
            printf("Error: El valor de ventas debe ser un valor positivo.\n");
            return 1;
        }

        if (horasTrabajadas <= 40) {
            salarioBruto = horasTrabajadas * valorPorHora;
        } else if (horasTrabajadas <= 50) {
            salarioBruto = 40 * valorPorHora + (horasTrabajadas - 40) * valorPorHora * 1.10;
        } else if (horasTrabajadas <= 55) {
            salarioBruto = 40 * valorPorHora + 10 * valorPorHora * 1.10 + (horasTrabajadas - 50) * valorPorHora * 1.15;
        } else {
            salarioBruto = 40 * valorPorHora + 10 * valorPorHora * 1.10 + 5 * valorPorHora * 1.15 + (horasTrabajadas - 55) * valorPorHora * 1.20;
        }

        if (montoVentas <= 800) {
            bonificaciones = montoVentas * 0.02;
        } else if (montoVentas <= 1500) {
            bonificaciones = montoVentas * 0.04;
        } else if (montoVentas <= 3000) {
            bonificaciones = montoVentas * 0.06;
        } else {
            bonificaciones = montoVentas * 0.08;
        }

        salarioFinal = salarioBruto - salarioBruto * 0.0945 + bonificaciones;
        printf("Salario: $%.2f\n", salarioFinal);
        totalNomina += salarioFinal;
    }

    printf("\nValor total de la nómina: $%.2f\n", totalNomina);

    return 0;
}

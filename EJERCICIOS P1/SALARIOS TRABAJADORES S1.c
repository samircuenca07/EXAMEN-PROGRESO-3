//Escriba un programa que encuentre el salario semanal de un trabajador,dada la tarifa horaria y el número de horas trabajadas diariamente.
//Se desea obtener el salario neto de un trabajador conociendo el número dehoras trabajadas, el salario hora y el porcentaje de impuestos que se ha deaplicar como deducciones

#include <stdio.h>

int main() {
    float tarifa_horaria, horas_trabajadas, impuestos, salario_bruto, salario_neto;
    char opcion;

    do {
        do {
            printf("Introduce la tarifa horaria: ");
            scanf("%f", &tarifa_horaria);
            if(tarifa_horaria < 0) {
                printf("La tarifa horaria no puede ser negativa. Inténtalo de nuevo.\n");
            }
        } while(tarifa_horaria < 0);

        do {
            printf("Introduce las horas trabajadas diariamente: ");
            scanf("%f", &horas_trabajadas);
            if(horas_trabajadas < 0 || horas_trabajadas > 24) {
                printf("Las horas trabajadas deben estar entre 0 y 24. Inténtalo de nuevo.\n");
            }
        } while(horas_trabajadas < 0 || horas_trabajadas > 24);

        do {
            printf("Introduce el porcentaje de impuestos: ");
            scanf("%f", &impuestos);
            if(impuestos < 0 || impuestos > 100) {
                printf("El porcentaje de impuestos debe estar entre 0 y 100. Inténtalo de nuevo.\n");
            }
        } while(impuestos < 0 || impuestos > 100);

        salario_bruto = tarifa_horaria * horas_trabajadas * 5; 

        salario_neto = salario_bruto - (salario_bruto * impuestos / 100);

        printf("El salario neto del trabajador es: %.2f\n", salario_neto);

        printf("¿Deseas calcular el salario de otra persona? (S/N): ");
        scanf(" %c", &opcion);
    } while(opcion == 'S' || opcion == 's');

    return 0;
}

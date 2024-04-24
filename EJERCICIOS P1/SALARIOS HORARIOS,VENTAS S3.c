#include <stdio.h>

int main() {
    int codigo;
    float horas, ventas, piezas, salario, salarioHora, horasExtras;
    char continuar;

    do {
        printf("Por favor, seleccione el tipo de nómina:\n");
        printf("1 para Gerentes\n");
        printf("2 para Trabajadores horarios\n");
        printf("3 para Trabajadores a comisión\n");
        printf("4 para Trabajadores a destajo\n");
        printf("Introduzca el código de nómina del empleado: ");
        scanf("%d", &codigo);

        switch(codigo) {
            case 1:
                do {
                    printf("Por favor, introduzca el salario semanal fijo del gerente: ");
                    scanf("%f", &salario);
                    if(salario < 0)
                        printf("El salario no puede ser negativo. Por favor, introduzca un valor válido.\n");
                } while(salario < 0);
                printf("El salario semanal del gerente es: %.2f\n", salario);
                break;
            case 2:
                do {
                    printf("¿El trabajador horario cumplió las 40 horas? (s/n): ");
                    char cumplio;
                    scanf(" %c", &cumplio);
                    if(cumplio == 's' || cumplio == 'S') {
                        do {
                            printf("Por favor, introduzca el salario por hora: ");
                            scanf("%f", &salarioHora);
                            if(salarioHora < 0)
                                printf("El salario por hora no puede ser negativo. Por favor, introduzca un valor válido.\n");
                        } while(salarioHora < 0);
                        salario = salarioHora * 40;
                        printf("¿El trabajador horario trabajó horas extras? (s/n): ");
                        char extras;
                        scanf(" %c", &extras);
                        if(extras == 's' || extras == 'S') {
                            do {
                                printf("Por favor, introduzca las horas extras trabajadas: ");
                                scanf("%f", &horasExtras);
                                if(horasExtras < 0)
                                    printf("Las horas extras trabajadas no pueden ser negativas. Por favor, introduzca un valor válido.\n");
                            } while(horasExtras < 0);
                            salario += 1.5 * salarioHora * horasExtras;
                        }
                    } else {
                        printf("Las horas no cumplen el mínimo de 40.\n");
                        salario = 0;
                    }
                } while(salario < 0);
                printf("El salario semanal del trabajador horario es: %.2f\n", salario);
                break;
            case 3:
                do {
                    printf("Por favor, introduzca las ventas semanales brutas del trabajador a comisión: ");
                    scanf("%f", &ventas);
                    if(ventas < 0)
                        printf("Las ventas semanales brutas no pueden ser negativas. Por favor, introduzca un valor válido.\n");
                } while(ventas < 0);
                salario = 250 + 0.057 * ventas;
                printf("El salario semanal del trabajador a comisión es: %.2f\n", salario);
                break;
            case 4:
                do {
                    printf("Por favor, introduzca el salario por pieza del trabajador a destajo: ");
                    scanf("%f", &salarioHora);
                    if(salarioHora < 0)
                        printf("El salario por pieza no puede ser negativo. Por favor, introduzca un valor válido.\n");
                } while(salarioHora < 0);
                do {
                    printf("Por favor, introduzca el número de piezas producidas: ");
                    scanf("%f", &piezas);
                    if(piezas < 0)
                        printf("El número de piezas producidas no puede ser negativo. Por favor, introduzca un valor válido.\n");
                } while(piezas < 0);
                salario = piezas * salarioHora; // Aquí se paga por pieza
                printf("El salario semanal del trabajador a destajo es: %.2f\n", salario);
                break;
            default:
                printf("Código de nómina no válido. Por favor, introduzca un código válido.\n");
        }

        printf("¿Desea calcular el salario de otro empleado? (s/n): ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');

    return 0;
}

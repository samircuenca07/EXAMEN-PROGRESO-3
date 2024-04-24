//Realice un programa que lea una temperatura a través de teclado y muestre porpantalla la actividad más apropiada para dicha temperatura teniendo en cuenta lossiguientes criterios

#include <stdio.h>

int main() {
    float temperatura;
    char clima[50];
    char *actividad;

    printf("¿Cómo está el clima hoy?: ");
    scanf("%s", clima);

    printf("Introduce la temperatura (valor entre -273.15 y 100): ");
    scanf("%f", &temperatura);

    if (temperatura < -273.15 || temperatura > 100) {
        printf("Error: La temperatura debe estar entre -273.15 y 100.\n");
        return 1;
    }

    if (temperatura > 30) {
        actividad = "Natación";
    } else if (temperatura >= 20) {
        actividad = "Tenis";
    } else if (temperatura >= 10) {
        actividad = "Golf";
    } else if (temperatura >= 5) {
        actividad = "Rugby";
    } else {
        actividad = "Parchís";
    }

    printf("Dado que la temperatura es %.1f°C y el clima es %s, te recomendaría %s.\n", temperatura, clima, actividad);

    return 0;
}


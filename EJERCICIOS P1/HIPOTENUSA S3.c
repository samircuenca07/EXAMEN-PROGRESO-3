Construir una función hipotenusa() que calcule la longitud de la hipotenusa de un triángulo
rectángulo, cuando son conocidos los otros dos lados. La función debe tomar dos argumentos de tipo
double y regresar la hipotenusa también como double. Utilizar esta función en un programa para
determinar la longitud de la hipotenusa de varios triángulos, como se muestra a continuación:

#include <stdio.h>
#include <math.h>


double hipotenusa(double lado1, double lado2) {
    return sqrt(lado1 * lado1 + lado2 * lado2);
}


int esTrianguloRectangulo(double lado1, double lado2, double hipotenusa) {
    double max = fmax(fmax(lado1, lado2), hipotenusa);
    if (max == hipotenusa) {
        return fabs((lado1 * lado1 + lado2 * lado2) - (hipotenusa * hipotenusa)) < 0.000001;
    }
    return 0;
}

int main() {
    double triangulos[3][3] = {{3.0, 4.0, 5.0}, {5.0, 12.0, 13.0}, {8.0, 15.0, 17.0}};
    double hip;

    printf("Triángulo\tLado1\tLado2\tHipotenusa\n");

    for (int i = 0; i < 3; i++) {
        if (esTrianguloRectangulo(triangulos[i][0], triangulos[i][1], triangulos[i][2])) {
            hip = hipotenusa(triangulos[i][0], triangulos[i][1]);
            printf("%d\t\t%.1f\t%.1f\t%.1f\n", i + 1, triangulos[i][0], triangulos[i][1], hip);
        } else {
            printf("Los lados proporcionados para el triángulo %d no forman un triángulo rectángulo.\n", i + 1);
        }
    }

    return 0;
}

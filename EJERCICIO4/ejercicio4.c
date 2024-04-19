#include <stdio.h>
#include <math.h>

float calcularRaizCuadrada(float numero) {
    if (numero >= 80 && numero <= 200) {
        return sqrt(numero);
    } else {
        return -1; // Retornar un valor negativo como indicador de error
    }
}

int main() {
    float numero;
    printf("Ingrese un numero entre 80 y 200: ");
    scanf("%f", &numero);
    float resultado = calcularRaizCuadrada(numero);
    if (resultado != -1) {
        printf("La raiz cuadrada de %0.f es: %.2f\n", numero, resultado);
    } else {
        printf("El numero ingresado esta fuera del rango permitido.\n");
    }

    return 0;
}

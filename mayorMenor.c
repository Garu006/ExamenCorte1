/*Leer dos números e imprima cual es mayor y el menor de los números ingresados.*/

#include <stdio.h>

int main() {
    int num1, num2, mayor, menor;

    printf("Ingresa el primer numero: ");
    scanf("%i", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%i", &num2);

    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }

    printf("El numero mayor es: %i\n", mayor);
    printf("El numero menor es:  %i\n", menor);

    return 0;
}
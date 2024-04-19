#include <stdio.h>

float CalcularTotalPagar(float precio) {
    float iva = 0.15;
    float descuento = 0.05; 
    float total;
    

    float impuesto = precio * iva;

    
    total = precio + impuesto;

    
    if (precio > 25000) {
        float descuentoAplicado = precio * descuento;
        total -= descuentoAplicado;
        
    }else {
        printf("No se aplica descuento.\n");
    }

    return total;
}

int main() {
    float precio;
    printf("Ingrese el precio del auto: $");
    scanf("%f", &precio);

    float totalPagar = CalcularTotalPagar(precio);
    printf("El total a pagar por la compra del auto es: $%.2f\n", totalPagar);

    return 0;
}

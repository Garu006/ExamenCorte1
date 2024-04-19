#include <stdio.h>

// Definimos una estructura para almacenar la información de cada producto
struct Producto {
    char nombre[50];
    float precioCompra;
    float precioVenta;
    int existencia;
};

int main() {
    // Definimos un array de productos con un tamaño máximo
    struct Producto productos[100];
    int numProductos;

    // Solicitamos al usuario el número de productos
    printf("Ingrese el numero de productos: ");
    scanf("%d", &numProductos);

    // Solicitamos y almacenamos la información de cada producto
    for (int i = 0; i < numProductos; i++) {
        printf("\nProducto %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", productos[i].nombre);
        printf("Precio Compra: ");
        scanf("%f", &productos[i].precioCompra);
        printf("Precio Venta: ");
        scanf("%f", &productos[i].precioVenta);
        printf("Existencia: ");
        scanf("%d", &productos[i].existencia);
    }

    // Calculamos la ganancia total
    float gananciaTotal = 0;
    for (int i = 0; i < numProductos; i++) {
        float ganancia = (productos[i].precioVenta - productos[i].precioCompra) * productos[i].existencia;
        printf("\nGanancia de %s: %.2f\n", productos[i].nombre, ganancia);
        gananciaTotal += ganancia;
    }

    // Imprimimos la ganancia total
    printf("\nGanancia total: %.2f\n", gananciaTotal);

    return 0;
}
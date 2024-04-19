/*Cree un procedimiento para leer un número del 1 al 12 
e imprimir el mes correspondiente a dicho número.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mes;
    printf("Dime un numero del 1 al 12 y te dire el mes correspondiente...\n");
    scanf("%i", &mes);
    
    if (mes == 1)
    {
        printf("Enero");
    }
    else if (mes == 2)
    {
        printf("Febrero");
    }
    else if (mes == 3)
    {
        printf("Marzo");
    }
    else if (mes == 4)
    {
        printf("Abril");
    }
    else if (mes == 5)
    {
        printf("Mayo");
    }
    else if (mes == 6)
    {
        printf("Junio");
    }
    else if (mes == 7)
    {
        printf("Julio");
    }
    else if (mes == 8)
    {
        printf("Agosto");
    }
    else if (mes == 9)
    {
        printf("Septiembre");
    }
    else if (mes == 10)
    {
        printf("Octubre");
    }else if (mes == 11)
    {
        printf("Noviembre");
    }else if (mes == 12)
    {
        printf("Diciembre");
    }
    else
    {
        printf("Opcion invalida...\n");
        main(0,0);
    }

    return 0;
}


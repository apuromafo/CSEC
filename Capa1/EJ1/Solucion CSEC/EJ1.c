/*
 *  Ejercicio 1. Capa 1.
 *  CSEC - Programación en C.
 */

#include <stdio.h>


// Función principal del programa.
int main(int argc, char **argv)
{

    // Declaraciones de variables y asignaciones.
    int key = 55201;
    int usercode = 0;

    // Printf para mostrar por pantalla y scanf para los datos de entrada.
    printf("\nControl de Acceso");
    printf("\nPor favor, introduzca la clave: ");
    scanf("%d", &usercode);

    // Condicional para comprobar el código introducido con la clave.
    if(usercode == key)
    {
        printf("\nAdelante puedes pasar\n");
    }
    else
    {
        printf("\n[!] Código incorrecto!");
    }

    return 0;
}

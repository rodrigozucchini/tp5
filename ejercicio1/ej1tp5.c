/*
    Realice un algoritmo que sirva para sumar los números que se ingresen por teclado. A
    medida que se ingresan los datos, se debe ir mostrando el total acumulado. El programa
    termina de ejecutarse cuando se ingresa el valor 0 (cero).
*/
#include <stdio.h>

int main()
{
    int numeroIngresado;
    int salida = 0;
    int total = 0;

    printf("Esto es un programa que mostrara el numero que ingreses \n");
    printf("A medida que mas numeros ingreses estos se sumaran y veras el total \n\n");

    printf("Ingrese un numero mostrar en pantalla , INGRESE 0 PARA SALIR\n\n");
    scanf("%d", &numeroIngresado);
    printf("Ingresaste el numero %d \n", numeroIngresado);

    while (numeroIngresado != salida)
    {
        total += numeroIngresado;
        printf("El total es de %d \n", total);

        printf("Ingrese otro numero para mostrar en pantalla que se sumara a el o los numeros anteriores, INGRESE 0 PARA SALIR\n");
        scanf("%d", &numeroIngresado);
    }
    printf("PROGRAMA TERMINADO");

    return 0;
}

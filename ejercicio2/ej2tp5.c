/* Realice un algoritmo que sirva para ingresar números (el programa deja de pedir números por
teclado cuando se ingresa el valor 0 (cero)) y al terminar el ingreso de números muestre: la
sumatoria y el promedio. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;
    int sumatoria = 0;
    float promedio = 0.0;
    int contador = 0;

    printf("Ingrese un numero, averiguaremos total y promedio, con 0 TERMINA EL PROGRAMA \n");
    scanf("%d", &numero);
    sumatoria = numero;
    contador = 1;

    while(numero != 0) {
        printf("Ingrese un numero, con 0 TERMINA EL PROGRAMA \n");
        scanf("%d", &numero);
        if(numero !=0 ) {
            sumatoria += numero;
            contador ++;
            printf("%d \n", contador);
            printf("%d \n", sumatoria);
        } else {
            contador;
        }

    }
    promedio = sumatoria / contador;
    printf("El numero es 0 asi que termina el programa, el total de todos los numeros ingresados es %d y el promedio es %.1f \n", sumatoria, promedio);

    return 0;
}

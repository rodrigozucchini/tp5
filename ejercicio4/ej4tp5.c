/* Copie el algoritmo anterior y modifíquelo para que, además de la sumatoria y el promedio;
también muestre el valor más pequeño ingresado y el valor más grande ingresado. */

#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int numero;
    int sumatoria = 0;
    float promedio = 0.0;
    int total = 0;
    int numeroMenor = 0;
    int numeroMayor = 0;
    int contador = 1;

    printf("Ingrese la cantidad total de iteraciones que tendra su programa que sea mayor a 0 \n");
    scanf("%d", &total);
    printf("Su programa tendra %d iteraciones \n", total);


    while (contador <= total)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &numero);
        sumatoria += numero;

        if ( contador == 1) {
            numeroMenor = numero;
            numeroMayor = numero;

            if(numero = 0) {
                numeroMenor;
            }
        } else {
            if ( numero < numeroMenor ) numeroMenor = numero; 
            if ( numero > numeroMayor ) numeroMayor = numero; 
        }
        contador++;
    }

    promedio = sumatoria / total;
    printf("El total de todos los numeros ingresados es %d y el promedio es %.1f \n", sumatoria, promedio);
    printf("El numero menor de estas iteraciones es el numero %d \n", numeroMenor);
    printf("El numero mayor de estas iteraciones es el numero %d \n", numeroMayor);

    return 0;
}

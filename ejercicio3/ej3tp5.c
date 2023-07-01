/* Copie el algoritmo anterior. Ahora es el usuario quien indica previamente cuántos números va
a ingresar. Luego de ello se ingresa la cantidad de números indicada y se emite la misma
salida que en el algoritmo anterior: la sumatoria y el promedio. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;
    int sumatoria = 0;
    float promedio = 0.0;
    int total = 0;

    printf("Ingrese la cantidad total de iteraciones que tendra su programa \n");
    scanf("%d", &total);
    printf("Su programa tendra %d iteraciones \n", total);

    for (int i = 1; i<=total; i++)
    {
        printf("Ingrese un numero \n");
        scanf("%d", &numero);
        sumatoria += numero;
    }

    promedio = sumatoria / total;
    printf("El total de todos los numeros ingresados es %d y el promedio es %.1f \n", sumatoria, promedio);

    return 0;
}

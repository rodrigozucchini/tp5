/* 
De la misma forma que en el caso anterior, copie y modifique el algoritmo de conversión de
grados Fahrenheit (tp iv ejercicio 8) para que vuelva a pedir el ingreso de grados Fahrenheit y
continuar haciendo conversiones. Cuando el usuario ingrese 999 grados Fahrenheit, será
señal de que desea dejar de usar el algoritmo.
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Ingrese los grados Fahrenheit: INGRESE 999 PARA SALIR  ");
    scanf("%f", &fahrenheit);

    while(fahrenheit != 999) {
        celsius = (fahrenheit - 32) * 5 / 9;

        printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);

        printf("Ingrese los grados Fahrenheit: INGRESE 999 PARA SALIR  ");
        scanf("%f", &fahrenheit);
    }
    printf("Ingresaste 99 asi que el programa termino ");
    return 0;
}
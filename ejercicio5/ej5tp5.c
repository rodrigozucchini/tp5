/* Copie el algoritmo que hacía cálculos de suma, resta, multiplicación y división (tp iv ejercicio
1) y modifíquelo para que una vez que éste ha mostrado el resultado de los cálculos, el
programa vuelva a solicitar datos y continúe haciendo cuentas (en vez de terminar la
ejecución). Cuando el usuario ingrese un cero (0) en el primer operador y un cero (0) en el
segundo operador, esto será señal de que el usuario desea terminar. Recuerde que debe
tener una “salida del algoritmo”, sino el usuario quedará “eternamente” dentro de un ciclo
infinito de ejecución del programa.
*/
#include <stdio.h>



int main () {
    int num1, num2, add, sub, multiply, divide;
    printf("Este es el cuarto ejercicio del trabajo practico 3, retornaremos la suma,resta, multiplicacion y division de dos numeros. \n");
    printf("si ingresas cero en los dos numeros termina el programa. \n");
    
    printf("Ingrese el primer numero:  \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero:  \n");
    scanf("%d", &num2);

    while (num1 != 0 || num2 != 0){
        add = num1 + num2;
        sub = num1 - num2;
        multiply = num1 * num2;
        
        if (num2 == 0) {
            printf("Error: denominador no puede ser cero.\n");
            divide = 1;
        } else {
            divide = num1 /  num2; 
        };

        printf("La suma es: %d\n", add);
        printf("La resta es: %d\n", sub);
        printf("La multiplicacion es: %d\n", multiply);
        printf("La division es: %d\n", divide);

        printf("Ingrese el primer numero:  \n");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero:  \n");
        scanf("%d", &num2);
    }
    printf("Fin del programa ingresaste las dos veces el numero 0");
    return 0;
}
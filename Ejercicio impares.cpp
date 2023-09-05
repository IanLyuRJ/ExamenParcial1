#include <stdio.h>
//Ejercicio "Programa que obtiene los impares de una lista de enteros", coloque una lista de numeros con espacio entre si (1 2 23 53) y imprime solo los impares//
int main() {
    int numero;
    int contimpares = 0;

    printf("Escribe una lista de numeros con espacios entre si (ingresa 0 para terminar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 != 0) {
            printf("Numero impar: %d\n", numero);
            contimpares++;
        }
    }

    if (contimpares == 0) {
        printf("No se ingresaron numeros impares en la lista.\n");
    }

    return 0;
}


#include <stdio.h>
//Ejercicio "Programa que obtiene la tabla de multiplicar de un numero", cualquier numero entero positivo que ponga, lo imprimira hasta su multiplo de 10//
int main() {
    int numero = 0;

    printf("Escribe qué numero quieres multiplicar hasta el 10 (0 para salir del programa): ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
		
		int i;
		for (i = 1; i <= 10; i++) {
			int resultado = numero * i;
			printf("Multiplo de %d: %d\n", numero, resultado);
		}
    }

    return 0;
}


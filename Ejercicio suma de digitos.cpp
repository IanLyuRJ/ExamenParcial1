#include <stdio.h>
//Ejercicio "Programa que sima los digitos de un numero, esto hace que si pongo 123 = 6//
int main() {
    int numero = 0;
	int suma = 0;
	int digito = 0;
	
    printf("Escribe qué numero entero positivo de 2 DIGITOS quieres sumar (0 para salir): ");
	scanf("%d",&numero);
	
	while (numero >0) {
		
		digito = numero %10;
		suma += digito;
		numero /= 10;
		
		
	}
	printf ("La suma de los digitos es: %d\n",suma);
    return 0;
}


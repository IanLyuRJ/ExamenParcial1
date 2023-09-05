#include <stdio.h>
#include <math.h>
//Ejercicio "Programa que imprime 10 numeros", necestias poner el numero 1, para que imprima la lista// 
int main() {
    
    int a = 0;
    
    printf("Escribe 1 para imprimir 10 numeros: ");
    scanf("%d", &a);
    
    while (a <= 10) {
        printf("El numero es: %d\n", a);
        a = a + 1;
    }
    
    return 0;
}






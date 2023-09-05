#include <stdio.h>
#include <math.h>
//Ejercicio "Programa que recibe numeros hasta encontrar uno negativo", usted va poniendo numeros hasta que ponga uno negativo//

int main() {
    
    int valor = 0;
    
    while (1) {  
        printf("Escribe un valor mayor o igual que 0 (numero negativo para salir): ");
        scanf("%d", &valor);
        
        if (valor < 0) {
            break; 
            
        }
        
        printf("El numero es: %d\n", valor);
    }
    
    return 0;
}


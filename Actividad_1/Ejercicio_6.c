// INGRESE LA TEMPERATURA EN GRADOS CELSIUS Y MUESTRELA EN FAHRENHEIT 

#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;
    
    // Pido temperatura en escala celsius
    printf("Ingrese la temperatura en grados celsius: \n");
    // Capturo el valor ingresado en una variable
    scanf("%d", &celsius);
    
    // Aplico la formula para pasar C a formula
    fahrenheit= (celsius * (9.0/5.0)) + 32;
    
    printf("%d grados celsius equvalen a %.2f grados fahrenheit", celsius, fahrenheit);
    return 0;
}
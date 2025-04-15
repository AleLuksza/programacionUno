/*
Año bisiesto:
Pide al usuario que ingrese un año. Determina si el año es bisiesto utilizando la regla
de los años bisiestos.
• Imprime un mensaje indicando si el año es bisiesto o no.
Pautas
Si un año es divisible por 4 y no por 100, es bisiesto.
Si un año es divisible por 100 pero también por 400, es bisiesto. O sea, los años
divisibles por 100 no son bisiestos, a menos que también sean divisibles por 400.
En cualquier otro caso, el año no es bisiesto.
*/
#include <stdio.h>
# include <stdlib.h>

int main(){
    
    int year, yearActual;
    yearActual = 2025;
    
    puts("Ingresa un año a voluntad y vemos si fue o va a ser bisiesto: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)){
        if (year < yearActual){
        printf("El año %d efectivamente fue bisiesto.", year);
        } else {
            printf("El año %d efectivamente va a ser bisiesto.", year);
        }
    } else if (year > yearActual) {
        printf("No, el año %d no va a ser bisiesto.", year);
    } else {
        printf("No, el año %d no fue bisiesto", year);
    }

  return 0;
}
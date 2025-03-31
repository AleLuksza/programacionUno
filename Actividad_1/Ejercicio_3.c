// INGRESE TRES NUMEROS Y MUESTRE EL PRODUCTO DE LOS DOS PRIMEROS SUMANDO AL TERCERO

#include <stdio.h>

int main(){
    int num1, num2, num3, respuesta;
    
    printf("Ingrese tres numeros entero, de a uno y pulsando enter despues de cada numero tipeado.\n");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    respuesta = (num1 * num2) + num3;
    
    printf("La suma de %d por %d mas %d es igual a %d.", num1, num2, num3, respuesta);
    return 0;
}
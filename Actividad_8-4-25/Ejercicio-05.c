/*
Ordenamiento de tres números:
• Solicita al usuario que ingrese tres números enteros.
• Utiliza sentencias if y operadores relacionales para ordenar los números de
menor a mayor.
• Imprime los números ordenados.
*/
#include <stdio.h>
# include <stdlib.h>

int main(){
    int num1, num2, num3, temp;
    
    puts("Ingrese un número entero: ");
    scanf("%d", &num1);
    puts("Ingrese otro número entero por favor: ");
    scanf("%d", &num2);
    puts("Por favor el tercer y último número please asi puede suceder la COMPUTER MAGIK.");
    scanf("%d", &num3);
    
    if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num1 > num3) { temp = num1; num1 = num3; num3 = temp; }
    if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }
    printf("Ordenados de menor a mayor: %d, %d, %d\n", num1, num2, num3);

  return 0;
}
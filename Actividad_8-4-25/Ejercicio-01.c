/*
Mayor de dos números:
Escribe un programa en C que solicite al usuario ingresar dos números enteros. El
programa debe realizar las siguientes acciones:
1. Validación de entrada: Verificar que ambos números ingresados NO sean
negativos. Si alguno de los números es negativo, mostrar un mensaje de error
indicando que los datos ingresados no son válidos y finalizar el programa.
2. Determinación del mayor: Si ambos números son no negativos, determinar
cuál de los dos es el mayor.
3. Almacenamiento del resultado: Guardar el número mayor en una variable
llamada mayor.
4. Impresión del resultado: Mostrar en la consola el valor almacenado en la
variable mayor, indicando cuál de los dos números ingresados es el mayor.".
*/
#include <stdio.h>

int main(){
    int num1, num2 ,mayor;
    puts("Ingrese un numero positivo por favor: ");
    scanf("%d", &num1);
    if (num1 < 0){
        puts("Numeros negativos no son validos. Reinicie");
    } else {
        puts("Ahora por favor ingrese otro numero positivo: ");
        scanf("%d", &num2);
        if (num2 < 0){
            puts("Permitime recordarte que no se permite usar numeros negativos.");
        } else {
            mayor = (num1 > num2) ? num1 : num2;
            printf("%d es el mayor de los numeros ingresados.", mayor);
        }
    }

    return 0;
}
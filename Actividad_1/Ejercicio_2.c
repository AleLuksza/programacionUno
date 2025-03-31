INGRESE DOS NUMEROS Y MUESTRE LA SUMA EN PANTALLA

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Ingrese un numero: \n");
    scanf("%d", &num1);
    printf("Ingrese otro numero: \n");
    scanf("%d", &num2);

    printf("La suma de ambos numeros es: %d.\n", (num1 + num2));

    return 0;
}
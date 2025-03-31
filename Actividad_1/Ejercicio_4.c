// INGRESE DOS NUMEROS Y MUESTRE LA DIFERENCIA ENTRE AMBOS

#include <stdio.h>

int main() {
    int num1, num2, aux;

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    if (num1 < num2) {

        aux = num1; 
        num1 = num2; 
        num2 = aux; 
    }

    int diferencia = num1 - num2;

    printf("La diferencia entre los nueros ingresados es: %d\n", diferencia);

    return 0;
}



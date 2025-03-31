// INGRESE UN NUMERO Y MUESTRE LA MITAD DEL SIGUIENTE

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    printf("La mitad del siguiente de numero es: %.2f.\n", (numero + 1) / 2.0);
    printf("Este es el último mensaje que se ejecuta.\n");

    return 0;
}

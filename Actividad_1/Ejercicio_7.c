// INGRESE DOS ANGULOS INTERNOS DE UN TRIANGULO Y MUESTRE EL TERCERO

#include <stdio.h>

int main(){
    int angulo_1, angulo_2, angulo_3, angulosInternos;

    
    printf("Escribite un angulo interno de un triangulo: \n");
    scanf("%d", &angulo_1);
    printf("Ahora otro y con mi computer magik te canto el tercero: \n");
    scanf("%d", &angulo_2);
    
    angulosInternos = angulo_1 + angulo_2;
    
    angulo_3 = 180 - angulosInternos;
    
    printf("Según mis calculos computacionales el tercer angulo deberia ser de %d grados", angulo_3);
    return 0;
}
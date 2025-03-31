// INGRESE UNA CANTIDAD DE CANICAS ROJAS Y SABIENDO QUE HAY CANICAS ROJAS, AMARILLAS Y TRANSPARENTES, 
//QUE LAS ROJAS SON EL DOBLE DE LAS TRANSPARENTES Y LAS AMARILLAS EL TRIPLE DE LA ROJAS. MUESTRE CUANTAS CANICAS DE CADA COLR HAY

#include <stdio.h>

int main(){
    int canicasRojas, canicasAmarillas, canicasTransparentes;
    
    printf("Ingrese el fokin numero de canicas rojas que la consigna solicita: \n");
    scanf("%d", &canicasRojas);
    
    canicasTransparentes = canicasRojas / 2;
    canicasAmarillas = canicasRojas * 3;
    
    printf("Hay %d canicas rojas.\n%d canicas amarillas.\nY %d canicas transparentes", canicasRojas, canicasTransparentes, canicasTransparentes);
    return 0;
}
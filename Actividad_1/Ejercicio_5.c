// INGRESE SU FECHA DE NACIMIENTO Y MUESTRE LA EDAD QUE TENDRA EN 2030

#include <stdio.h>

int main() {
    int dia, mes, anio, dia_actual, mes_actual;
    int edad_2030;

    // Pido la decha de nacimiento
    printf("Ingresa tu fecha de nacimiento (día mes año): ");
    scanf("%d %d %d", &dia, &mes, &anio);
    // Pido el mes y dia actuales
    printf("Ingrese dia y mes actuales (dia mes): ");
    scanf("%d %d", &dia_actual, &mes_actual);

    // Calcular la edad que vas a tener en 2030
    edad_2030 = 2030 - anio;  // 

    // Verificar que sea una fecha valida
    if (mes > 12 || dia > 31 || mes < 1 || dia < 1) {
        printf("Fecha de nacimiento no válida.\n");
        return 0;  // Sale del programa si la fecha es inválida
    }
    
    // Verificar no bardear con febrero
        if (mes == 2 && dia > 29) {
        printf("Febrero solo tiene 28 dias, a lo sumo 29!!!");
        return 0; // Sale del programa 
    }


    // Si el cumpleaños a esta fecha en 2030 no paso todavia le resto 1 a la edad de 2030
    if (mes > mes_actual || (mes == mes_actual && dia_actual > dia)) {
        edad_2030--;
    }

    printf("En el año 2030, tendrás %d años.\n", edad_2030);

    return 0;
}

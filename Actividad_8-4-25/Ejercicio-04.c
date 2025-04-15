/*
Calificación de examen:
• Pide al usuario que ingrese la calificación de un examen (un número entero).
• Utiliza sentencias if y operadores relacionales para asignar una letra de
calificación (A, B, C, D, o F). concepto de if anidado.
A: 90 - 100
Ejemplo: 95
B: 80 - 89
Ejemplo: 85
C: 70 - 79
Ejemplo: 75
D: 60 - 69
Ejemplo: 65
F: 0 - 59
Ejemplo: 50

*/
#include <stdio.h>
# include <stdlib.h>

int main(){
    
   int calificacion;
   puts("Ingrese su calificación (entre cero y cien): ");
   scanf("%d", &calificacion);
   
   if (calificacion > 100 || calificacion < 0){
       puts("Usted ha ingresado una calificación de fuera del rango.");
   } else {
       if (calificacion >= 90 && calificacion <= 100){
           puts("Felicitaciones, obtuviste una A.");
       } else if (calificacion >= 80 && calificacion <=89) {
           puts("Casi perfecto, obtuviste una B.");
       } else if (calificacion >= 70 && calificacion <= 79) {
           puts("Vamos bien, sacaste una C.");
       } else if (calificacion >= 60 && calificacion <= 69) {
           puts("Habría que estudiar mas, sacaste una D. No te desanimes.");
       } else {
           puts("Que macana che... sacaste F, deberías tomar clases particulares para remontar.");
       }
   }

  return 0;
}
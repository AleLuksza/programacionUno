/*
Verificación de rango:
Pide al usuario que ingrese un número entero. Verifica si el número está dentro del
rango de 1 a 100 (inclusive). Imprime un mensaje indicando si el número está dentro o
fuera del rango.
*/
#include <stdio.h>
# include <stdlib.h>

int main(){
  int numIng;
  puts("Ingrese un número positivo entre 0 y 100 por favor: ");
  scanf("%d", &numIng);
  
  if (numIng >100 || numIng < 0){
      puts("El número ingresado se encuentra fuera del rango especificado");
  } else {
      puts("Veo que por lo menos podes seguir consignas simples. Bien ahí");
  }
  return 0;
}
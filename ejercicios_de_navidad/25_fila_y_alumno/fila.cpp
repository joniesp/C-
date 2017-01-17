#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, fila, columna;

  printf("Introduce el numero de lista:\n");
  scanf(" %i", &numero);

  if(numero % 10 == 0)
      fila = numero / 10;
  else
      fila = (numero / 10) + 1;

 if(numero % 10 == 0)
      columna = 10;
 else
      columna = numero % 10;

  printf("El alumno esta en la fila %i y en la columna %i\n", fila, columna);
    return EXIT_SUCCESS;
}

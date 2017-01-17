#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int numero, conversion;

  printf("Este programa convierte de base 10 a base 6\n");

  printf("Introduce un numero en base 10:\n");
  scanf(" %i", &numero);

  do{
      printf("%i\n", numero / 6);
      numero /= 6;
  }while(numero > 0);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "matematicas.h"

int main(int argc, char *argv[]){

  printf("2 + 3 = %i", suma(2,3));
  printf("3 - 2 = %i", resta(3,2));
  printf("3 * 2 = %i", mult(3,2));
  printf("6 / 2 = %i", divi(6,2));

  return EXIT_SUCCESS;
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char dni[9];
  int entero;

  sscanf("09070478z", "%s", dni);

  entero = atoi(dni);

  printf("%i\n\r", entero);

  return EXIT_SUCCESS;
}

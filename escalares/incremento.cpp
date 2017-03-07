#include <stdio.h>
#include <stdlib.h>

void incrementa(int *numero, int incremento){

    *numero += incremento;
}



int main(int argc, char *argv[]){

  int a = 2;
  int b = 5;


  incrementa(&a, 5);
  printf("%i\n", a);
  incrementa(&b, 3);
  incrementa(&a, -2);
  printf("%i", a);
  return EXIT_SUCCESS;
}

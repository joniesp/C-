#include <stdio.h>
#include <stdlib.h>


int suma(int a, int b){

    int resultado = 0;

    resultado = a + b;

    return resultado;
}

int main(int argc, char *argv[]){

  int resultado;

  resultado = suma(2,3);

  printf(" %i\n", resultado);
    return EXIT_SUCCESS;
}

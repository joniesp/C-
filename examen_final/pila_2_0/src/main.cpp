#include <stdio.h>
#include <stdlib.h>

#include "pila.h"


int main(int argc, char *argv[]){


  struct TPila pila;
  
  pila.cima = 0;

  for(int i = 0; i < MAX; i++)
    push(&pila, crear_elemento());

  imprimir_pila(&pila);

  while(pop(&pila));


  return EXIT_SUCCESS;
}

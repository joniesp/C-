#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>
#include "pila.h"

#define TANQUES 100
#define NAVES 100


int main(int argc, char *argv[]){


  struct TPila objetos;

  srand(time(NULL));
  bzero(&objetos, sizeof(objetos));

  for(int i = 0; i < NAVES; i++)
    push(&objetos, crear_nave_aleatoria());


  for(int i = 0; i < TANQUES; i++)
    push(&objetos, crear_tanque_aleatorio());


  //ver(objetos);
  actualiza(&objetos);

  while(pop(&objetos));

  return EXIT_SUCCESS;
}


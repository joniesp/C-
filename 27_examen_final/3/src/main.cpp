#include <stdio.h>
#include <stdlib.h>
#include "naves.h"
#include <time.h>

int main(int argc, char *argv[]){

  struct TNave naves[MAX];

  srand(time(NULL));

  for(int i = 0; i < MAX; i++){
    crear_nave(&naves[i]);
    mover_nave(naves[i]);
  }

  pintar_naves(naves);

  return EXIT_SUCCESS;
}


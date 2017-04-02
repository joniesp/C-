#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include "pila.h"


#define CNAVES 100

int main(int argc, char *argv[]){

  struct TPila pantalla;

  srand(time(NULL));
  bzero(&pantalla,sizeof(pantalla));

  for(int i = 0; i < CNAVES; i++)
    push(&pantalla, crear_nave_aleatoria());


  ver(pantalla);

  while(pop(&pantalla));

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include "naves.h"
#include <stdlib.h>

void crear_nave(struct TNave *nave){

  nave->vida = 100;
  nave->coordenadas.x = rand() % 100;
  nave->coordenadas.y = rand() % 100;
  nave->letra = (char) (rand() % 27 + 'A');

}

struct TNave mover_nave(struct TNave nave){

  nave.coordenadas.x = nave.coordenadas.x + 1;
  nave.coordenadas.y = nave.coordenadas.y + 1;

  return nave;
}

void pintar_naves(struct TNave naves[MAX]){

  for(int i = 0; i < MAX; i++)
    printf("La nave %i: %c, %i, %i, %i\n",
	i + 1, naves[i].letra, naves[i].vida, naves[i].coordenadas.x, naves[i].coordenadas.y);
}

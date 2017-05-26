#include "pila.h"
#include <stdio.h>
#include <stdlib.h>

bool push(struct TPila *pila, struct TMovil *dato){

  if(pila->cima >= MAX)
    return false;

  pila->datos[pila->cima++] = dato;
    return true;
}

bool pop(struct TPila *pila){

  if(pila->cima <= 0)
    return false;

  free(pila->datos[--pila->cima]);
    return true;

}

struct TMovil *crear_elemento(){

  struct TMovil *nuevo;

  nuevo = (struct TMovil*) malloc(sizeof(struct TMovil));
  nuevo->x = rand() % MAX_X;
  nuevo->y = rand() % MAX_Y;

  return nuevo;

}

void imprimir_pila(struct TPila* pila){

  for(int i = 0; i < pila->cima - 1; i++)
      printf("X: %i Y: %i\n", pila->datos[i]->x, pila->datos[i]->y);
}

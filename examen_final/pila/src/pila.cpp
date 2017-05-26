#include "pila.h"
#include <stdlib.h>


bool push(struct TPila *pila, struct TVector *vector){

  if(pila->cima >= 100)
    return false;

  pila->pila[pila->cima++] = vector;
    return true;

}

bool pop(struct TPila *pila){

  if(pila->cima <= 0)
    return false;

  pila->pila[--pila->cima]; // free si hacemos malloc
    return true;

}

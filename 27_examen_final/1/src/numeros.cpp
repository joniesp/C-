#include "pila.h"
#include <stdio.h>

bool push(struct TPila* pila, int dato){

  if(pila->cima >= MAX_PILA)
    return false;

  pila->numeros[pila->cima++] = dato;
    return true;

}

int pop(struct TPila *p){
  if (p->cima <= 0)
    return 0;

  return p->numeros[p->cima--];
}


void imprime_pila(struct TPila pila){

  for(int i = 0; i < pila.cima; i++)
    printf("%i\n", pila.numeros[i]);

  printf("\n");
}



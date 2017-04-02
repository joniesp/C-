#include "pila.h"
#include <stdio.h>
#include <stdlib.h>

bool push(struct TPila *pila, struct TMovil *dato){

  if(pila->cima >= MAX_PILA)
      return false;

  pila->data[pila->cima++] = dato;
      return true;
}

bool pop(struct TPila *pila){

  if(pila->cima <= 0)
      return false;
  free(pila->data[--pila->cima]);
      return true;
}

void actualiza_nave(struct TMovil *nave){

  printf("Actualizar naves\n");
  printf("Soy %s.\n" , nave->nombre);

}

struct TMovil *crear_nave_aleatoria(){

  struct TMovil *nave;
  static int id = 0;

  nave = (struct TMovil *) malloc (sizeof(struct TMovil));
  nave->x = rand() % MAX_X;
  nave->y = rand() % MAX_Y;
  sprintf(nave->nombre, "Nave %i", ++id);
  nave->actualiza = actualiza_nave;

  return nave;
}


void actualiza_tanque(struct TMovil *tanque){

  printf("Actualizar tanque\n");
  printf("Soy el tanque %s\n.", tanque->nombre);

}

struct TMovil *crear_tanque_aleatorio(){

  struct TMovil *tanque;
  static int id = 0;

  tanque = (struct TMovil *) malloc (sizeof(struct TMovil));
  tanque->x = rand() % MAX_X;
  tanque->y = rand() % MAX_Y;
  sprintf(tanque->nombre, "Tanque %i", ++id);
  tanque->actualiza = actualiza_tanque;

  return tanque;

}

void mostrar(struct TMovil *dato){

    printf("----------------\n");
    printf("%s\n", dato->nombre);
    printf("{%.2lf, %.2lf }\n", dato->x, dato->y);

}

void ver(struct TPila pila){

  for(int i = 0; i < pila.cima ; ++i)
      mostrar(pila.data[i]);
}

void actualiza(struct TPila *pila){

  for(int i = 0; i < pila->cima; i++)
    pila->data[i]->actualiza(pila->data[i]);

}

#ifndef __PILA_H__
#define __PILA_H__

#include <stdlib.h>
#include <stdio.h>

#define MAX_PILA 0x200
#define MAX_X 100
#define MAX_Y 100

struct TMovil{

  double x;
  double y;

};

struct TPila{

  int cima;
  struct TMovil *data[MAX_PILA];

};


#ifdef __cplusplus
extern "C"{
#endif

  bool push(struct TPila * pila, struct TMovil * movil);
  bool pop(struct TPila * pila);
  struct TMovil * crear_nave_aleatoria();
  void mostrar(struct TMovil * dato);
  void ver(struct TPila pila);

#ifdef __cplusplus
}

#endif


#endif

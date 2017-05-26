#ifndef __PILA_H__
#define __PILA_H__

#define MAX   100
#define MAX_X 40
#define MAX_Y 40

struct TMovil{

  int x;
  int y;

};

struct TPila{

  int cima;
  struct TMovil *datos[MAX];

};


#ifdef __cplusplus
extern "C"{
#endif

  bool push(struct TPila *, struct TMovil *);
  bool pop(struct TPila *);
  void imprimir_pila(struct TPila *);
  struct TMovil *crear_elemento();


#ifdef __cplusplus
}
#endif

#endif

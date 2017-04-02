#ifndef __PILA_H__
#define __PILA_H__

#define MAX 30
#define MAX_PILA 100
#define MAX_X 100
#define MAX_Y 100

struct TMovil{

  char nombre[MAX];
  double x;
  double y;
  void (*actualiza)(struct TMovil *);

};

struct TPila{

  struct TMovil *data[MAX_PILA];
  int cima;

};


#ifdef __cplusplus
extern "C"{
#endif

  bool push(struct TPila *pila, struct TMovil *dato);
  bool pop(struct TPila *pila);
  struct TMovil *crear_nave_aleatoria();
  struct TMovil *crear_tanque_aleatorio();
  void mostrar(struct TMovil *dato);
  void ver(struct TPila pila);
  void actualiza(struct TPila *pila);

#ifdef __cplusplus
}
#endif


#endif

#ifndef __PILA_H__
#define __PILA_H__

#define MAX_PILA 100

struct TPila{
  int cima;
  int numeros[MAX_PILA];
};

#ifdef __cplusplus
extern "C"{
#endif

  bool push(struct TPila *, int numero);
  int pop(struct TPila*);
  void imprime_pila(struct TPila);

#ifdef __cplusplus
}
#endif

#endif
